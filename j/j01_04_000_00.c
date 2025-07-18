BGOpen("ho210",0);
ScrFadeIn(0);
BGOpen("ho210",0);
ChLayout(1);
SEPlay("EV_SE_663");
Wait(10,0);
SEWait();
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J010400000_04_000");
    MsgDisp("Nanatsumori","...Yeah.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝?
It's ｛主人公苗字｝.");
    VoicePlay("J010400000_04_010");
    MsgDisp("Nanatsumori","*sigh.
What's this about?.");
    MsgDisp("主人公","Uh, well...");
    break ;
    case 3:
    VoicePlay("J010400000_04_020");
    MsgDisp("Nanatsumori","...Yeah.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝?
It's ｛主人公苗字｝.
Is this a good time to talk?");
    VoicePlay("J010400000_04_010");
    MsgDisp("Nanatsumori","Yeah, it's fine.
What's up?");
    MsgDisp("主人公","Uh, well...");
    break ;
    case 4:
    case 5:
    VoicePlay("J010400000_04_040");
    MsgDisp("Nanatsumori","Hello.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝?
It's ｛主人公苗字｝.
Is it okay to call now?...");
    VoicePlay("J010400000_04_050");
    MsgDisp("Nanatsumori","It's fine.
...I've been waiting, so.
What's up?");
    MsgDisp("主人公","Well...");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
