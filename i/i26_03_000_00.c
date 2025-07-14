BGOpen("ar600",0);
BGMStop();
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","There we go- ah.");
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE")Wait(35,0);
    BGMPlay("BGM_C03_HONDA_A");
    ChOpen(3,35,1,5,4,#1,#1,0,0,0,5);
    VoicePlay("I260300000_03_000");
    MsgDisp("Honda","Watch out!");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    Wait(40);
    VoicePlay("I260300000_03_010");
    MsgDisp("Honda","......Phew, thank goodness.
I told you I'd take care of the heavy
stuff, right?");
    MsgDisp("主人公","｛本多＊＊｝, thanks...... But I can't
leave everything to you.");
    ChEye(3,1);
    ChMouth(3,4);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_020");
    MsgDisp("Honda","That doesn't mean you should be reckless.
At least use a cart.");
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_030");
    MsgDisp("Honda","This distance was fine, but this
carelessness can lead to accidents.");
    MsgDisp("主人公","......Okay.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_040");
    MsgDisp("Honda","Then, leave the rest to me.
I'll leave the cash register to you.");
    MsgDisp("主人公","(Haa...... I made ｛本多＊＊｝ worry.)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_043");
    Wait(80,0);
    SEStop("EV_SE_043",0);
    Wait(20,0);
    SEPlay("EV_SE_043");
    Wait(12,0);
    SEStop("EV_SE_043",0);
    Wait(35,0);
    SEPlay("EV_SE_043");
    Wait(12,0);
    SEStop("EV_SE_043",0);
    MsgDisp("主人公","......Hm?");
    MsgClose();
    BGMPlay("BGM_C03_HONDA_A");
    ChOpen(3,35,0,4,4,#1,#1,0,0);
    VoicePlay("I260300000_03_050");
    MsgDisp("Honda","What is it?");
    MsgDisp("主人公","The cash register froze.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_060");
    MsgDisp("Honda","What do you mean? ......Ah, a customer.
Welcome!");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_070");
    MsgDisp("Honda","Then, can you just keep a record of the
books sold and their prices?");
    MsgDisp("主人公","Hm, but this......");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_080");
    MsgDisp("Honda","We can't close up shop just because the
cash register isn't working, right?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I260300000_03_090");
    MsgDisp("Honda","I'll enter today's sales later.
As long as you keep the records, it'll be
easy.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_100");
    MsgDisp("Honda","Ah, for payments, use the spare money and
calculator in that drawer.");
    MsgDisp("主人公","Yeah...... Thanks, ｛本多＊＊｝.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I260300000_03_110");
    MsgDisp("Honda","Come on, stop looking like you're about to
cry. The customers are waiting for your
smile, so smile!");
    MsgDisp("主人公","(Haa...... I made a lot of extra work for
｛本多＊＊｝. )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
