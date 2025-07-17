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
    MsgDisp("主人公","Phone call...
Ah, it's ｛みちる＊｝.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    VoicePlay("U012100002_21_000");
    MsgDisp("Michiru","Hi Mari～
Are you at home right now?");
    MsgDisp("主人公","Yeah, I am.
What's up?");
    VoicePlay("U012100002_21_010");
    MsgDisp("Michiru","Why don't you come to the forest park
today? The weather is quite nice. What do
you think?");
    MsgSel("Sure, I'm coming!","I'm busy today...Sorry.");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("U012100002_21_020");
        MsgDisp("Michiru","Thank goodness!
Ok then, let's meet up there.
See you soon.");
        MsgDisp("主人公","Gotcha.
See you there in a bit!");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        break ;
        case 1:
        VoicePlay("U012100002_21_030");
        MsgDisp("Michiru","I see... That's unfortunate but I guess
it can't be helped... Well, later then.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though she took the time to invite
me...
Did I make the right choice?)");
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
