BGOpen("ar300",1);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","Would you like your windows to be wiped
down?
Then, please allow me.");
    MsgDisp("主人公","Ah...... is there anything you don't need
in your car? If you'd like, I can throw it
away for you.");
    VoicePlay("I660800001_39_000");
    MsgDisp("Male Customer","Then, could you throw this away?
Thanks.");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    MsgClose();
    ChOpen(8,35,0,4,0,#1,#1,0,0);
    VoicePlay("I660800001_08_000");
    MsgDisp("Shirahane","You pay attention even to the smallest
details now, dont'cha?");
    MsgDisp("主人公","Yeah. You're setting a good example,
｛大地＊＊｝.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("I660800001_08_010");
    MsgDisp("Shirahane","F'real?
I'm gettin' fired up!");
    MsgDisp("主人公","(Yeah, I think I'm getting
used to this!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Would you like your windows to be wiped
down?
Then, please allow me.");
    MsgDisp("主人公","Ah...... is there anything you don't need
in your car? If you'd like, I can throw it
away for you.");
    VoicePlay("I660800001_39_010");
    MsgDisp("Male Customer","Nothing today.
Thanks as always.");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    MsgClose();
    ChOpen(8,35,0,4,0,#1,#1,0,0);
    ChMotion(8,3,1);
    VoicePlay("I660800001_08_020");
    MsgDisp("Shirahane","As expected......
Full points on attentiveness!");
    MsgDisp("主人公","Ah, ｛大地＊＊｝. Thanks to you.");
    ChEye(8,3);
    ChMouth(8,4);
    ChEyeOpenLevel(8,10);
    VoicePlay("I660800001_08_030");
    MsgDisp("Shirahane","Thanks t'me?");
    MsgDisp("主人公","You're always setting a good example,
｛大地＊＊｝.");
    ChEye(8,4);
    ChMouth(8,3);
    ChMotion(8,2,1);
    VoicePlay("I660800001_08_040");
    MsgDisp("Shirahane","Well...... I won't deny it.");
    MsgDisp("主人公","Hehe!");
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("I660800001_08_050");
    MsgDisp("Shirahane","But your attentiveness ain't bad to see,
either.
It feels good just watchin' it.");
    MsgDisp("主人公","(Yay! ｛大地＊＊｝ praised me!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop()MsgClose();
ScrFadeOut(0);
