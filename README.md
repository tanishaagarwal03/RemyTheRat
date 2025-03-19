# RemyTheRat

This project was created for our **CS12** course - 'Introduction to Prototyping' at Caltech, where we designed, 3D printed, and built a small robotic rat inspired by *Ratatouille*. The rat features **moving arms**, **LED eyes**, and the ability to **hold hair** — all controlled using an **Arduino Nano Every**.  

## 🎨 Design & Iteration Process  
We initially started with the [Remy model](https://github.com/shebuildsrobots/remy_model) which was our inspiration for this project but found that it didn’t match our vision. After multiple modifications and failed attempts, we learned Blender and designed our own version. Below are the major stages of development:  

### First Print (Original STL)  
The original model looked very different to what we had imagined, even when we tried to edit it (learned the hard way that STL files should not be edited directly).  
![First Print](images/first_print.jpg)  

### Blender Modifications  
Then we decided to go all in and learned **Blender** and created a **basic modified version** to understand how this would look printed and gauge sizing and measurements.  
![Blender Edit](images/blender_edit_one.jpg)  

### Second Print (With Arms)  
This model had **arms added**, allowing us to test the **servo motors and LED fittings**, but the arms were too big.  
![Second Print](images/second_print.jpg)  

### Final Print (Painted & Assembled)  
The **final model** was **resized, painted**, and fitted with **servo motors and LED eyes**. Remy's palms form a circular grip so Remy can **hold hair** and it looks like Remy is actually controling us.  
![Final Model](images/final_model.jpg)  

## ⚙️ Hardware & Components  
- **Microcontroller:** Arduino Nano Every  
- **Actuation:** Servo motors for arm movement  
- **Lighting:** LED eyes  
- **Material:** 3D-printed PLA, hand-painted with acrylic  

## 📂 Repository Contents  
- **`stl_files/`** – All four versions of our **Remy 3D model** (`.stl` files)  
- **`remy_code.ino`** – Code for controlling the **servo motors and LED eyes**  
- **`images/`** – Pictures from each stage of the project  

## 🔧 How It Works  
1. The **servos randomly move the arms**, simulating small randomised motions.  
2. The **LED eyes light up**, adding a lively effect.  
3. The arms are positioned to **hold a piece of hair**, staying true to *Ratatouille*.  

## Future Tweaks

- Add accelerometers to add a feature that the arms of the rat move along with the arm's of the wearer so that it actually looks like the movie rat.
- Better the 3D Blender model to look more realistic.
- Code the LEDs to blink faster in sync with the Ratatouille music.

# Collaboration

I collaborated on this project with my peers Anya Mischel and Bhakti Ahir Ahir over the course of 10 weeks.
