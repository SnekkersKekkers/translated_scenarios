BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(｛颯砂＊＊｝ isn't here yet...)");
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    MsgClose();
    ChOpen(2,253,0,2,0,#1,#1,0,0);
    VoicePlay("B010200001_02_000");
    MsgDisp("Sassa","Sorry!
I made you wait.");
    MsgDisp("主人公","No, it's alright.
Did you run here?");
    ChEye(2,4);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B010200001_02_010");
    MsgDisp("Sassa","Yeah. I got nothing but green lights, all
the way from my house to here.");
    MsgDisp("主人公","What?? You ran all the way here from your
house?");
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1,1);
    VoicePlay("B010200001_02_020");
    MsgDisp("Sassa","Yeah, that much I can do.
Alright, let's go.");
    MsgDispSksp(0);
    break ;
    case 3:
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    MsgClose();
    ChOpen(2,253,0,2,0,#1,#1,0,0);
    VoicePlay("B010200001_02_030");
    MsgDisp("Sassa","Sorry!
I made you wait.");
    MsgDisp("主人公","I did wait some.");
    ChEye(2,4);
    ChMouth(2,0);
    ChMotion(2,1);
    VoicePlay("B010200001_02_040");
    MsgDisp("Sassa","Yeah... Then as an apology, I'll carry all
your bags today.");
    MsgDisp("主人公","Hehe, it's okay.
I run late sometimes too.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B010200001_02_050");
    MsgDisp("Sassa","No need to be modest.
I could carry you around too?");
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    MsgDisp("主人公","Hey, you're not sorry about it at all now.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    MsgClose();
    ChOpen(2,253,0,2,0,#1,#1,0,0);
    VoicePlay("B010200001_02_060");
    MsgDisp("Sassa","Sorry, I left you waiting!");
    MsgDisp("主人公","No, it's okay.");
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B010200001_02_070");
    MsgDisp("Sassa","... Huh.
You can be a little angrier.");
    MsgDisp("主人公","Huh?");
    ChEye(2,2);
    ChMouth(2,2);
    ChMotion(2,2);
    VoicePlay("B010200001_02_080");
    MsgDisp("Sassa","If you were already expecting me here,
you'd probably feel anxious when I
wasn't... Unless you aren't looking
forward to this?");
    MsgDisp("主人公","That's not the case at all!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B010200001_02_090");
    MsgDisp("Sassa","I see, I'm glad.
Well, I'll just have to make a full
recovery from this today!");
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    MsgDisp("主人公","Hehe, yeah!");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
