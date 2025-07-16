BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040423501_04_000");
MsgDisp("Nanatsumori","I'd like to try being a ghost extra...");
MsgSel("L-Looks like you're serious about it...","Would you want to be a Japanese style or Western style ghost?","Would it be aright with the agency?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040423501_04_010");
    MsgDisp("Nanatsumori","Hehe...
I believe I can scare you with 100％
confidence...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("B040423501_04_020");
    MsgDisp("Nanatsumori","Hmm.
I'd like to try being both.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    VoicePlay("B040423501_04_030");
    MsgDisp("Nanatsumori","No, I wasn't expecting a serious answer...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
