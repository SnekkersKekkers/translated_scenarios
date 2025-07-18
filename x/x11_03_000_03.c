switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(3,254,1,0,3,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110300003_03_000");
    MsgDisp("Honda","Good job on the joint practice!
I heard you decided on a new move?");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Yes, I did my best!");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("X110300003_03_010");
    MsgDisp("Honda","I'll have to ask you to show it to me
sometime.");
    MsgDisp("主人公","(I did it!
I got praised by ｛本多＊＊｝!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(3,254,1,0,3,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110300003_03_020");
    MsgDisp("Honda","Hey, is it true that you were interviewed
at the last rhythmic gymnastics joint
practice?");
    MsgDisp("主人公","Even if you call it an interview, it's a
newspaper club from another school, right?");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("X110300003_03_030");
    MsgDisp("Honda","Still, it's an attention-getter. right?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("X110300003_03_040");
    MsgDisp("Honda","I know there will be a lot of pressure,
good luck for the next match!");
    MsgDisp("主人公","(Yay!
Let's keep up the good work!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
