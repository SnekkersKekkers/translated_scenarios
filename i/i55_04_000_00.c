BGOpen("ar500",0);
ChLayout(1);
ChNanaType(0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,255,0,0,0,#1,#1,0,0);
    VoicePlay("I550400000_04_000");
    MsgDisp("Nanatsumori","Ah.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Welcome.");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("I550400000_04_010");
    MsgDisp("Nanatsumori","Nah.
I'm not here to buy anything.");
    MsgDisp("主人公","Hm?");
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("I550400000_04_020");
    MsgDisp("Nanatsumori","Can't I window shop at a Japanese sweets
shop?");
    MsgDisp("主人公","Y-Yes.
Please take your time looking around.");
    ChEye(4,3);
    ChMouth(4,3);
    VoicePlay("I550400000_04_030");
    MsgDisp("Nanatsumori","Yeah.
By the way, got any new sweets?");
    MsgDisp("主人公","(Window shopping...or not?)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,255,0,0,0,#1,#1,0,0);
    VoicePlay("I550400000_04_040");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Welcome!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I550400000_04_050");
    MsgDisp("Nanatsumori","Hey, have anything that'll go with coffee?");
    MsgDisp("主人公","Yes, we do. I recommend these small
daifuku, made with citrus zest, fresh
cream, and sweet bean paste.");
    ChEye(4,4);
    ChMouth(4,1);
    ChMotion(4,0,1);
    VoicePlay("I550400000_04_060");
    MsgDisp("Nanatsumori","I'll drool just listening to you...");
    MsgDisp("主人公","Hehe!
I have other recommendations if you'd
like?");
    ChEye(4,3);
    ChMouth(4,3);
    VoicePlay("I550400000_04_070");
    MsgDisp("Nanatsumori","Sure.");
    ChMotion(4,0,1);
    VoicePlay("I550400000_04_080");
    MsgDisp("Nanatsumori","Ah, keep one of those daifuku for me.
Now tell me about the next one.");
    MsgDisp("主人公","(Hehe.
I hope ｛七ツ森＊｝ likes these.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,255,0,0,0,#1,#1,0,0);
    VoicePlay("I550400000_04_090");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Welcome!");
    ChEye(4,3);
    ChMouth(4,4);
    VoicePlay("I550400000_04_100");
    MsgDisp("Nanatsumori","Hm. I thought someone was calling me from
inside the store. Was it the Japanese
sweets, or you?");
    MsgDisp("主人公","Hehe, thank you for your continued
patronage!
What are you looking for today?");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("I550400000_04_110");
    MsgDisp("Nanatsumori","Let's see.
...How about you?");
    MsgDisp("主人公","Hm?");
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("I550400000_04_120");
    MsgDisp("Nanatsumori","What do you eat when you're feeling great
and having a good time?");
    MsgDisp("主人公","Hm...");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I550400000_04_130");
    MsgDisp("Nanatsumori","So, if I was the one feeling like that,
which would you recommend?");
    MsgDisp("主人公","｛七ツ森＊｝'s current feelings?
A very good mood, and kinda happy...");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("I550400000_04_140");
    MsgDisp("Nanatsumori","Right, right.");
    ChEye(4,3);
    ChMouth(4,4);
    ChMotion(4,2,1);
    VoicePlay("I550400000_04_150");
    MsgDisp("Nanatsumori","Well, anything you'd choose for me would
be the correct answer, though.");
    MsgDisp("主人公","(Is ｛七ツ森＊｝ testing me?
Alright, I'll choose something that he'll
definitely like!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
