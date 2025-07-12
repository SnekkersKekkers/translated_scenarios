MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    VoicePlay("X110400003_04_000");
    MsgDisp("Nanatsumori","I heard you did a new move at a joint
practice of the Rhythmic Gymnastics Club.
That's amazing.");
    MsgDisp("主人公","Hmmm, thanks!");
    MsgDisp("主人公","(I'm glad I worked hard in the rhythmic
gymnastics club ......!)");
    break ;
    case 4:
    case 5:
    VoicePlay("X110400003_04_010");
    MsgDisp("Nanatsumori","The other day at a joint practice of the
rhythmic gymnastics club, I heard you made
a legend with your amazing moves.");
    MsgDisp("主人公","So, legend?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("X110400003_04_020");
    MsgDisp("Nanatsumori","You performed a new super high
school-level move, didn't you? I don't
know much about rhythmic gymnastics, but I
would have loved to have seen it ......");
    MsgDisp("主人公","(It's a little embarrassing, but ......
I'm glad I've been working hard on my
rhythmic gymnastics club!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
