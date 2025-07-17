BGOpen("ho210",0);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    SEPlay("EV_SE_577");
    MsgDisp("主人公","(Oh?
It's a call from ｛颯砂＊＊｝ )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, hello.");
    VoicePlay("J040200001_02_000");
    MsgDisp("Sassa","Ah, it's me.
Now, do you have a second?");
    MsgDisp("主人公","Yeah, what's up?");
    VoicePlay("J040200001_02_010");
    MsgDisp("Sassa","Are you free this Sunday?");
    MsgSel("Yeah, I'm free.","I've got some errands to run...");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        VoicePlay("J040200001_02_020");
        MsgDisp("Sassa","I see...
I'll ask you out again.");
        MsgDisp("主人公","Yeah, sorry.");
        VoicePlay("J040200001_02_030");
        MsgDisp("Sassa","Okay, good.
See you at school.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(This Sunday...
What was that about?)");
        MsgClose();
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 5:
    SEPlay("EV_SE_577");
    MsgDisp("主人公","(Oh?
It's a call from ｛颯砂＊＊｝ )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, hello.");
    VoicePlay("J040200001_02_040");
    MsgDisp("Sassa","Hey, I'm here.
I was wondering if you don't mind if I
call you right now.?");
    MsgDisp("主人公","Yeah, I'm fine.
So?");
    VoicePlay("J040200001_02_050");
    MsgDisp("Sassa","Let's see, this Sunday, are you free?");
    MsgSel("Yeah, I'm free.","Sorry, I have to run an errand...");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        VoicePlay("J040200001_02_060");
        MsgDisp("Sassa","Oh, okay.");
        MsgDisp("主人公","Did you need something?");
        VoicePlay("J040200001_02_070");
        MsgDisp("Sassa","No, no big deal.
I'll call you again.");
        VoicePlay("J040200001_02_080");
        MsgDisp("Sassa","See you at school.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(He went to the trouble of asking me out.
I did a bad thing, didn't I?...)");
        MsgClose();
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
