BGOpen("ho210",0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    SEPlay("EV_SE_577");
    MsgDisp("主人公","(Oh?
It's a call from ｛本多＊＊｝ )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, hello.");
    VoicePlay("J040300001_03_000");
    MsgDisp("Honda","Hey, it's me!");
    MsgDisp("主人公","Yeah, what's up?");
    VoicePlay("J040300001_03_010");
    MsgDisp("Honda","It's this Sunday, are you free?");
    MsgSel("Yeah, I'm free.", "I have to run an errand......");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        VoicePlay("J040300001_03_020");
        MsgDisp("Honda","I see.
I guess I can't do it then.");
        MsgDisp("主人公","Sorry.");
        VoicePlay("J040300001_03_030");
        MsgDisp("Honda","No, not at all!
I asked you out of the blue.");
        VoicePlay("J040300001_03_040");
        MsgDisp("Honda","Well, I'll see you next time!");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(I think I did something wrong......)");
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
It's a call from ｛本多＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    VoicePlay("J040300001_03_050");
    MsgDisp("Honda","Oh, hey hey!
It's Honda.");
    MsgDisp("主人公","Mm-hmm, yeah.
What's wrong?");
    VoicePlay("J040300001_03_060");
    MsgDisp("Honda","It's this coming Sunday, are you free?");
    MsgSel("Yeah, I'm free.", "Sorry, I have to run an errand......");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        VoicePlay("J040300001_03_070");
        MsgDisp("Honda","...... Oh, I see!
That's right.");
        MsgDisp("主人公","Well, it was an invitation of some sort?");
        VoicePlay("J040300001_03_080");
        MsgDisp("Honda","Oh, yeah. And yet, I.., I was so excited
on my own, I didn't think about the
possibility I didn't even consider that
our schedules might not match.");
        VoicePlay("J040300001_03_090");
        MsgDisp("Honda","Well, see you next time.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Sorry, I'm sorry I turned you down......)");
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
