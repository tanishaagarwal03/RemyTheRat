# RemyTheRat

This project was created for our **CS12** course - 'Introduction to Prototyping' at Caltech, where we designed, 3D printed, and built a small robotic rat inspired by *Ratatouille* and by instagram creator @shebuildsrobots. The rat features **moving arms**, **LED eyes**, and the ability to **hold hair** — all controlled using an **Arduino Nano Every**. The rat sits atop a headband you can wear.
<p align="center">
<img src="images/final.PNG" alt="Final Finished Model" width="600">
</p>
<p align="center">
<img src="images/on_hair.jpg" alt="Final Finished Model On Head" width="600">
</p>

## 🎨 Design & Iteration Process  
We initially started with the [Remy model](https://github.com/shebuildsrobots/remy_model) which was our inspiration for this project but found that it didn’t match our vision. After multiple modifications and failed attempts, we learned Blender and designed our own version. Below are the major stages of development:  

### First Print (Original STL)  
The original model looked very different to what we had imagined, even when we tried to edit it (learned the hard way that STL files should not be edited directly).   
<p align="center">
<img src="images/trial_one.jpg" alt="First Print" width="400">
</p>

### Blender Modifications  
Then we decided to go all in and learned **Blender** and created a **basic modified version** to understand how this would look printed and gauge sizing and measurements.  
<p align="center">
<img src="images/trial_two.jpg" alt="Second Print" width="400">
</p>

### Second Print (With Arms)  
This model had **arms added**, allowing us to test the **servo motors and LED fittings**, but the arms were too big. You can see the edits made to the back of the rat to fit the motors and the holes made for the eyes to hold the LEDs.
<p align="center">
<img src="images/trial_three.jpg" alt="Third Print" width="400">
</p>

### Final Print (Painted & Assembled)  
The **final model** was **resized, painted**, and fitted with **servo motors and LED eyes**. Remy's palms form a circular grip so Remy can **hold hair** and it looks like Remy is actually controling us.  
<p align="center">
<img src="images/trial_four.jpg" alt="Fourth Print" width="400">
</p>

## ⚙️ Hardware & Components  
- **Microcontroller:** Arduino Nano Every  
- **Actuation:** Servo motors for arm movement  
- **Lighting:** LED eyes  
- **Material:** 3D-printed PLA, hand-painted with acrylic  

## 📂 Repository Contents  
- **`stl_files/`** – The last versions of our **Remy 3D model** (`.stl` files) - with the body, the left arm and the right arm. 
- **`remy_code.ino`** – Code for controlling the **servo motors and LED eyes**  
- **`images/`** – Pictures from each stage of the project  

## 🔧 How It Works  
1. The **servos randomly move the arms**, simulating small randomised motions.  
2. The **LED eyes light up**, adding a lively effect.  
3. The arms are positioned to **hold a piece of hair**, staying true to *Ratatouille*.

You can find more details about how you can build it here: https://hackaday.io/project/202363-remy-the-rat.

## Future Tweaks

- Add accelerometers to add a feature that the arms of the rat move along with the arm's of the wearer so that it actually looks like the movie rat.
- Better the 3D Blender model to look more realistic.
- Code the LEDs to blink faster in sync with the Ratatouille music.

# Collaboration

I collaborated on this project with my peers Anya Mischel and Bhakti Ahir Ahir over the course of 10 weeks.
