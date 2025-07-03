switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("S060400001_04_000");
    MsgDisp("Nanatsumori","Oh, you really wore it.
That kimono is perfect.");
    MsgDisp("主人公","Thank you.");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("S060400001_04_010");
    MsgDisp("Nanatsumori","You have a different charm to you
than those professional model girls......");
    MsgDisp("主人公","Really?
That's a little embarrassing.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("S060400001_04_020");
    MsgDisp("Nanatsumori","Oh, you have a nice expression.
Maybe that's why.");
    MsgDisp("主人公","(I'm so relieved.
｛七ツ森＊｝ looks really happy!)");
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("S060400001_04_030");
    MsgDisp("Nanatsumori","That kimono is perfect.
Very beautiful.");
    MsgDisp("主人公","Ah, thank you!");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("S060400001_04_040");
    MsgDisp("Nanatsumori","Heh......
I think it looks better on you than on
a professional model.");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("S060400001_04_050");
    MsgDisp("Nanatsumori","I guess there's a filter on my
eyes.");
    MsgDisp("主人公","Filter?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("S060400001_04_060");
    MsgDisp("Nanatsumori","Yep.
The kind of filter that makes you look
more beautiful than usual.");
    MsgDisp("主人公","(Yay.
Looks like ｛七ツ森＊｝ is happy!)");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("S060400001_04_070");
    MsgDisp("Nanatsumori","By the way......
Is that kimono custom made?");
    MsgDisp("主人公","Huh?");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("S060400001_04_080");
    MsgDisp("Nanatsumori","It really suits you perfectly.");
    MsgDisp("主人公","Thank you.
It's not custom made, but I like it too.");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("S060400001_04_090");
    MsgDisp("Nanatsumori","I see.
Really so beautiful......");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("S060400001_04_100");
    MsgDisp("Nanatsumori","Yeah.
I'm definitely the happiest man in the
world right now.");
    MsgDisp("主人公","(Yay!
｛七ツ森＊｝ seems happy!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
