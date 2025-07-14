BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(Oh, it's from ｛御影＊＊｝! )");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("J040700001_07_000");
MsgDisp("Mikage","Hello.");
MsgDisp("主人公","｛御影＊＊｝, you seem well.");
VoicePlay("J040700001_07_010");
MsgDisp("Mikage","So.
You know......");
MsgDisp("主人公","(Maybe there is a place you want to
go......
What shall we do?)");
MsgSel("I'd like to go out this Sunday.", "I'm busy that day......");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    VoicePlay("J040700001_07_020");
    MsgDisp("Mikage","Oh, I see.
I'll see you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(I'm sorry you had to call me......
Yeah, maybe next time I'd like to go out.)");
    MsgClose();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
