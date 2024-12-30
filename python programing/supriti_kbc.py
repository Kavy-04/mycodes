def kbc():
    Tot_Amt = 0
    Q1 = print("How many planets are there in our univeerse : a)4 b)8 c)12 d)9 \n NOTE Apko is sawal ka sahi jawab dene me milenge pure 15,000 ruppees")

    choice = input("Enter your Q1 choice:")
    if choice.lower() == 'a':
        print("Galat jawab. To apke hath se pure 15,000 rupee chale gye , is bat ka hame khed h".upper())
    elif choice.lower() == 'b':
        print("Bilkul sahi jawab, to apne jeeta pure 15,000 rupee".upper())
        Tot_Amt += 15000
    elif choice.lower() == 'c':
        print("Galat jawab. To apke hath se pure 15,000 rupee chale gye , is bat ka hame khed h".upper())
    elif choice.lower() == 'd':
        print("Galat jawab. To apke hath se pure 15,000 rupee chale gye , is bat ka hame khed h".upper())

    Q2 = print("What is the largest planet in our universe : a)Jupiter b)Mars c)Pluto d)Mercury  \n NOTE Apko is sawal ka sahi jawab dene me milenge pure 10,000 ruppees")


    choice = input("Enter your Q2 choice:")
    if choice.lower() == 'a':
        print("Bilkul sahi jawab, to apne jeeta pure 10,000 rupee".upper())
        Tot_Amt += 10000
    elif choice.lower() == 'b':
        print("Galat jawab. To apke hath se pure 10,000 rupee chale gye , is bat ka hame khed h".upper())
    elif choice.lower() == 'c':
        print("Galat jawab. To apke hath se pure 10,000 rupee chale gye , is bat ka hame khed h".upper())
    elif choice.lower() == 'd':
        print("Galat jawab. To apke hath se pure 10,000 rupee chale gye , is bat ka hame khed h".upper())


    Q3 = print("there are many hindu gods in our sanatan dharma one of them are known as tridev , they are Mahadev, Krishna and the third god is: a)Narad b)Ram c)Brahma d)Venkateshwar \n NOTE Apko is sawal ka sahi jawab dene me milenge pure 20,000 ruppees")


    choice = input("Enter your Q3 choice:")
    if choice.lower() == 'a':
        print("Galat jawab. To apke hath se pure 20,000 rupee chale gye , is bat ka hame khed h".upper())
    elif choice.lower() == 'b':
        print("Galat jawab. To apke hath se pure 20,000 rupee chale gye , is bat ka hame khed h".upper())
    elif choice.lower() == 'c':
        print("Bilkul sahi jawab, to apne jeeta pure 20,000 rupee".upper())
        Tot_Amt += 20000
    elif choice.lower() == 'd':
        print("Galat jawab. To apke hath se pure 20,000 rupee chale gye , is bat ka hame khed h".upper())

    Q4 = print("Which of the following quotes was said by Subhash Chandra Bose: \n a)You give me blood and I'll give you freedom \n b)Inqilab Zindabad\n c)Defeat and failures are sometimes necessary steps for victory \n d)They may kill me, but they cannot kill my ideas. \n NOTE Apko is sawal ka sahi jawab dene me milenge pure 25,000 ruppees")


    choice = input("Enter your Q4 choice:")
    if choice.lower() == 'a':
        print("Bilkul sahi jawab, to apne jeeta pure 25,000 rupee".upper())
        Tot_Amt += 25000
    elif choice.lower() == 'b':
        print("Galat jawab. To apke hath se pure 25,000 rupee chale gye , is bat ka hame khed h".upper())
    elif choice.lower() == 'c':
        print("Galat jawab. To apke hath se pure 25,000 rupee chale gye , is bat ka hame khed h".upper())
    elif choice.lower() == 'd':
        print("Galat jawab. To apke hath se pure 25,000 rupee chale gye , is bat ka hame khed h".upper())

    Q5 = print("Here are some famous lines said by Rabindranath Tagore Ji. Which of the following is not said by him: \n a)If no one responds to your call, then walk alone \n b)Faith is the bird that feels the light when the dawn is still dark \n c)You can’t cross the sea merely by standing and staring at the water. \n d)Failure comes only when we forget our ideals, objectives, and principles. \n NOTE Apko is sawal ka sahi jawab dene me milenge pure 50,000 ruppees")


    choice = input("Enter your Q5 choice:")
    if choice.lower() == 'a':
        print("Galat jawab. To apke hath se pure 50,000 rupee chale gye , is bat ka hame khed h".upper())
    elif choice.lower() == 'b':
        print("Galat jawab. To apke hath se pure 50,000 rupee chale gye , is bat ka hame khed h".upper())
    elif choice.lower() == 'c':
        print("Galat jawab. To apke hath se pure 50,000 rupee chale gye , is bat ka hame khed h".upper())
    elif choice.lower() == 'd':
        print("Bilkul sahi jawab, to apne jeeta pure 50,000 rupee".upper())
        Tot_Amt += 50000
    print("To apka total amount hota hai = ",Tot_Amt)
kbc()
