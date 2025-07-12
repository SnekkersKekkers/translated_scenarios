BGOpen("ar600",0);
MsgClose();
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,35,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_430");
    MsgDisp("Honda","I thought the order form was
around here, do you know where it went?");
    MsgDisp("主人公","I already took care of it.
Ah, did I overstep?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("I260300000_03_440");
    MsgDisp("Honda","Ah, then it's fine.
It was a rush order, so the manager
called me.");
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I260300000_03_450");
    MsgDisp("Honda","You saved me by taking care of it.
Thanks!");
    MsgDisp("主人公","(Hehe, I was praised!)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_460");
    MsgDisp("Honda","The manager wanted to change
the shelf layout a little......");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_470");
    MsgDisp("Honda","They wanted your opinion.
What do you think?");
    MsgDisp("主人公","Hm, me?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("I260300000_03_480");
    MsgDisp("Honda","Yeah yeah.
It's been a while since you started
working, so you have some ideas, right?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_490");
    MsgDisp("Honda","And, the manager asking for your
opinion means that your work and
existence has been recognized.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_500");
    MsgDisp("Honda","I want to hear your opinion, too.
Keep it up!");
    MsgDisp("主人公","(My hard work has been
recognized...... I'm so happy!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
