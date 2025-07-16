switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1);
    VoicePlay("R040400001_04_000");
    MsgDisp("Nanatsumori","Woah...");
    MsgDisp("主人公","Um, what's up?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("R040400001_04_010");
    MsgDisp("Nanatsumori","Your dress.
It looks amazing on you.");
    MsgDisp("主人公","Really?
Thank you!");
    VoicePlay("R040400001_04_020");
    MsgDisp("Nanatsumori","You are definitely helping to hype up the
venue.
Good job.");
    break ;
    case 3:
    ChEye(4,4);
    ChMouth(4,4);
    VoicePlay("R040400001_04_030");
    MsgDisp("Nanatsumori","But...");
    MsgDisp("主人公","But?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("R040400001_04_040");
    MsgDisp("Nanatsumori","You're dressed like a royal princess.");
    MsgDisp("主人公","Really?
Now I'm kind of embarrassed...");
    ChMotion(4,0,1);
    VoicePlay("R040400001_04_050");
    MsgDisp("Nanatsumori","Yeah. Wouldn't a princess look better with
a nice smile on her face instead of a
nervous one?");
    MsgDisp("主人公","Uh...");
    ChEye(4,3);
    ChMouth(4,3);
    VoicePlay("R040400001_04_060");
    MsgDisp("Nanatsumori","Ah, I like that expression too.
It's pretty funny.");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("R040400001_04_070");
    MsgDisp("Nanatsumori","You look absolutely beautiful in that
dress.");
    MsgDisp("主人公","...Really?");
    ChEye(4,4);
    ChMouth(4,3);
    VoicePlay("R040400001_04_080");
    MsgDisp("Nanatsumori","Really.
Your makeup looks nice too.");
    MsgDisp("主人公","Yeah, a little bit, right?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("R040400001_04_090");
    MsgDisp("Nanatsumori","Absolutely.
It makes you look a little bit different
than usual.");
    ChMotion(4,0,1);
    VoicePlay("R040400001_04_100");
    MsgDisp("Nanatsumori","I'd love to dress up like you.
Could you let me, one day?");
    MsgDisp("主人公","Huh∋");
    ChEye(4,3);
    ChMouth(4,3);
    VoicePlay("R040400001_04_110");
    MsgDisp("Nanatsumori","Hehe.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
