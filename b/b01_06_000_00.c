BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm running late...
｛氷室＊＊｝ is...
Already here!)");
MsgDisp("主人公","I'm sorry for keeping you waiting!");
BGMPlay("BGM_C06_INORI_A",0.01);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,253,0,0,0,#1,#1,0,0);
    VoicePlay("B010600000_06_000");
    MsgDisp("Himuro","The amount of time you wasted is
extraordinary.
Don't let there be a next time.");
    MsgDisp("主人公","... Okay.");
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B010600000_06_010");
    MsgDisp("Himuro","The proper reply is \"Yes\".");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgClose();
    ChOpen(6,253,0,0,0,#1,#1,0,0);
    VoicePlay("B010600000_06_020");
    MsgDisp("Himuro","Exactly as late as I expected.");
    MsgDisp("主人公","Urgh, I'm sorry...");
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B010600000_06_030");
    MsgDisp("Himuro","It's whatever.
If we don't turn the mood around we won't
have a good time.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,253,0,0,2,#1,#1,0,0);
    VoicePlay("B010600000_06_040");
    MsgDisp("Himuro","... Did something happen?");
    MsgDisp("主人公","What do you mean?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B010600000_06_050");
    MsgDisp("Himuro","Did you have some sort of accident or get
into any trouble?");
    MsgDisp("主人公","Oh, I'm okay.
Thank you though, sorry.");
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B010600000_06_060");
    MsgDisp("Himuro","... Oh.
I see.
Well, then.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
