import cv2
import mediapipe as mp
import numpy as np
mp_drawing = mp.solutions.drawing_utils
mp_drawing_styles = mp.solutions.drawing_styles
mp_face_mesh = mp.solutions.face_mesh

# For static images:

def get_face_landmarks(pic):
  IMAGE_FILES = [pic]

  drawing_spec = mp_drawing.DrawingSpec(thickness=10, circle_radius=1)
  with mp_face_mesh.FaceMesh(
      static_image_mode=True,
      max_num_faces=1,
      refine_landmarks=True,
      min_detection_confidence=0.5) as face_mesh:
    for idx, file in enumerate(IMAGE_FILES):
      image = cv2.imread(file)
      # Convert the BGR image to RGB before processing.
      results = face_mesh.process(cv2.cvtColor(image, cv2.COLOR_BGR2RGB))

      # Print and draw face mesh landmarks on the image.
      if not results.multi_face_landmarks:
        continue
      annotated_image = image.copy()
      for face_landmarks in results.multi_face_landmarks:
        #continue
        mp_drawing.draw_landmarks(
            image=annotated_image,
            landmark_list=face_landmarks,
            connections= mp_face_mesh.FACEMESH_TESSELATION,#frozenset([(127, 34),  (34, 139),  (139, 127),  (11, 0),    (0, 37),    (37, 11)]),#
            landmark_drawing_spec=None,
            connection_drawing_spec=mp_drawing_styles
            .get_default_face_mesh_tesselation_style())
        # mp_drawing.draw_landmarks(
        #     image=annotated_image,
        #     landmark_list=face_landmarks,
        #     connections=mp_face_mesh.FACEMESH_CONTOURS,
        #     landmark_drawing_spec=None,
        #     connection_drawing_spec=mp_drawing_styles
        #     .get_default_face_mesh_contours_style())
        # mp_drawing.draw_landmarks(  
        #     image=annotated_image,
        #     landmark_list=face_landmarks,
        #     connections=mp_face_mesh.FACEMESH_IRISES,
        #     landmark_drawing_spec=None,
        #     connection_drawing_spec=mp_drawing_styles
        #     .get_default_face_mesh_iris_connections_style())
      path = 'etmp/annotated_image' + str(idx) + '.jpg'
      cv2.imwrite('ra/lul.png', annotated_image)
  keypoints = []
  for data_point in face_landmarks.landmark:
    keypoints.append([
            data_point.x,
            data_point.z,
            1 - data_point.y
           
            ])
  print(type(keypoints[1][1]))
  return keypoints

#get_face_landmarks("face2.jpg")

