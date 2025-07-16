switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1);
    VoicePlay("L040400003_04_000");
    MsgDisp("Nanatsumori","Ah, cool.");
    MsgDisp("主人公","?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("L040400003_04_010");
    MsgDisp("Nanatsumori","This chocolate is handmade, right?
You hit bingo with this topping.");
    MsgDisp("主人公","Really?");
    ChMotion(4,1);
    VoicePlay("L040400003_04_020");
    MsgDisp("Nanatsumori","Really.
Looking forward to eating it.
Thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(Thank goodness.
He seemed to like it!)");
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("L040400003_04_030");
    MsgDisp("Nanatsumori","Ah, this is handmade.
Nice, nice.");
    MsgDisp("主人公","I hope it suits your tastes,
｛七ツ森＊｝......");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("L040400003_04_040");
    MsgDisp("Nanatsumori","I like it.
This topping is the one I like.");
    MsgDisp("主人公","Really?
Great!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("L040400003_04_050");
    MsgDisp("Nanatsumori","It's not like me, but I'm going to brag to
my family about this, then eat it in a
good mood. Thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(Thank goodness!
He seemed really happy!)");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("L040400003_04_060");
    MsgDisp("Nanatsumori","I did it.
Handmade chocolate, get.");
    MsgDisp("主人公","I tried making it to your liking,
｛七ツ森＊｝......
How is it?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("L040400003_04_070");
    MsgDisp("Nanatsumori","Bingo.
It only has things I like.
The topping is the best!");
    MsgDisp("主人公","Really?
Thank goodness......!");
    ChMotion(4,0);
    VoicePlay("L040400003_04_080");
    MsgDisp("Nanatsumori","Can I take a picture and show it off to my
coworkers?");
    MsgDisp("主人公","Ah, I guess so.
It's a little embarrassing, though......");
    ChEye(4,2);
    ChMouth(4,4);
    VoicePlay("L040400003_04_090");
    MsgDisp("Nanatsumori","Crap......
Today's been packed and overflowing with
everything I love......");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("L040400003_04_100");
    MsgDisp("Nanatsumori","Actually, I changed my mind. I'll keep
this all to myself, and enjoy this
blissful moment. Thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(He seemed really happy!
Thank goodness!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
