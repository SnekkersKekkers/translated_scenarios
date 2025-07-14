ScrFadeOut(0);
BGOpen("ho210",0);
switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    SEPlay("EV_SE_577");
    MsgDisp("主人公","Huh...a phone call?
Oh, it's ｛みちる＊｝.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    VoicePlay("U012100000_21_000");
    MsgDisp("Michiru","Hi Mari～
Are you free to talk right now?");
    MsgDisp("主人公","Sure, what's up?");
    VoicePlay("U012100000_21_010");
    MsgDisp("Michiru","I know it's sudden but......Would you like
to go to the shopping mall with me?");
    MsgSel("Of course I'll go!","Sorry but I can't......");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("U012100000_21_020");
        MsgDisp("Michiru","Thank you.
Well then, I'll meet you there.");
        MsgDisp("主人公","I see.
Well, maybe some other time then!");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        break ;
        case 1:
        VoicePlay("U012100000_21_030");
        MsgDisp("Michiru","I see.
I was kind of in a hurry...I guess it
can't be helped, see you later.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(She went through all of that trouble to
invite me......
Maybe that was a mistake.)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
