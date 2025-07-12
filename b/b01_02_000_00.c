BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm late...
Ah, ｛颯砂＊＊｝ is already here!)");
MsgDisp("主人公","Sorry I made you wait...!");
BGMPlay("BGM_C02_SASSA_A",0.01);
MsgClose();
ChOpen(2,253,3,0,4,#1,#1,0,0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B010200000_02_000");
    MsgDisp("Sassa","Yo, there you are.");
    MsgDisp("主人公","I'm so sorry for being late!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B010200000_02_010");
    MsgDisp("Sassa","I didn't wait too long.");
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    MsgDisp("主人公","Oh good, I'm glad.");
    MsgDispSksp(0);
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B010200000_02_020");
    MsgDisp("Sassa","Haha, don't be in such a rush.");
    MsgDisp("主人公","Sorry for making you wait.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B010200000_02_030");
    MsgDisp("Sassa","Well, I waited a bit, but I said I would.
No need to sweat the small stuff.");
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    MsgDisp("主人公","Thank you.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B010200000_02_040");
    MsgDisp("Sassa","Oh, here you come.");
    MsgDisp("主人公","I'm sorry for being late.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B010200000_02_050");
    MsgDisp("Sassa","It's true I waited, but...
No need to make that face about it.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B010200000_02_060");
    MsgDisp("Sassa","Oh, why don't we just meet up here
again next time?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B010200000_02_070");
    MsgDisp("Sassa","So next time you can be on time.
That way it can overwrite
you being late today.");
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    MsgDisp("主人公","Hehe, okay. I get it.
Thank you.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
