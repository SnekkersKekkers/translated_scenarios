switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_579");
    MsgDisp("主人公","Ah, ｛大地＊＊｝ is calling.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    MsgDisp("主人公","Hello, ｛大地＊＊｝?");
    VoicePlay("S040800000_08_000");
    MsgDisp("Shirahane","Yo!
Happy New Years!");
    MsgDisp("主人公","Happy New Years!
Please treat me well this year, too.");
    VoicePlay("S040800000_08_010");
    MsgDisp("Shirahane","Same to you.
Hey, want to go to the shrine now?");
    MsgSel("Yeah, let's go!","Sorry, I'm a bit……");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040800000_08_020");
        MsgDisp("Shirahane","Yes!
I'll come and pick you up then.
Get dressed and wait for me, okay?");
        MsgDisp("主人公","Eh, right now?");
        VoicePlay("S040800000_08_030");
        MsgDisp("Shirahane","Good things don't wait.
See you soon.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(I need to quickly get ready!
What should I wear to the shrine?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040800000_08_040");
        MsgDisp("Shirahane","I see.
The timing was off......");
        MsgDisp("主人公","I'm sorry.");
        VoicePlay("S040800000_08_050");
        MsgDisp("Shirahane","Yeah.
Anyway, later.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though he went through
the trouble of inviting me......
Did I make the wrong choice?)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_579");
    MsgDisp("主人公","Ah, a phone call from ｛大地＊＊｝.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_579",0);
    MsgDisp("主人公","Hello, ｛大地＊＊｝?");
    VoicePlay("S040800000_08_060");
    MsgDisp("Shirahane","Happy New Year!
Please treat me well again this year.");
    MsgDisp("主人公","Happy New Year.
And the same to you.");
    VoicePlay("S040800000_08_070");
    MsgDisp("Shirahane","Hey, do ya wanna to go to the
shrine......?");
    MsgSel("Yeah, let's go!","Sorry, I'm a bit……");
    switch (MsgSelRsltGet()){
        case 0:
        VoicePlay("S040800000_08_080");
        MsgDisp("Shirahane","Yes!");
        MsgDisp("主人公","Hehe, you're full of energy 
this year.");
        VoicePlay("S040800000_08_090");
        MsgDisp("Shirahane","I guess it was you who made me
so energetic?
Haha!");
        VoicePlay("S040800000_08_100");
        MsgDisp("Shirahane","Okay then......
I'll come get you from your house.
So get ready and wait.");
        VoicePlay("S040800000_08_110");
        MsgDisp("Shirahane","Ah, I guess if you want to
dress up it'll take a while......
I'll come slowly.
See you later.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(I feel like he's expecting
something from me......
Now then, what to wear?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        case 1:
        VoicePlay("S040800000_08_120");
        MsgDisp("Shirahane","......Really?");
        MsgDisp("主人公","Yeah, sorry.");
        VoicePlay("S040800000_08_130");
        MsgDisp("Shirahane","I see......");
        VoicePlay("S040800000_08_140");
        MsgDisp("Shirahane","It's fine, it can't be helped.
Alright, seeya.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though he went through
all the trouble of inviting me......
Did I make wrong choice?)");
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
