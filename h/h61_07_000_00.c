BGOpen("sc101",0);
ScrFadeIn(0);
MsgDisp("主人公","Alright, let's join the gardening club!");
MsgClose();
ScrFadeOut(0);
BGOpen("sc606",0);
ScrFadeIn(0);
VoicePlay("H610700000_46_000");
MsgDisp("Manager","Let's do our best to improve the
activities of the club.");
MsgDisp("主人公","Yes!
I'm looking forward to it!");
MsgDisp("主人公","(Alright, let's do our best!)");
SEPlay("EV_SE_625");
SEWait();
BGMPlay("BGM_C07_MIKAGE_C",0.01);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(7,37,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("H610700000_07_000");
    MsgDisp("Mikage","｛主人公｝, you joined the
gardening club?");
    MsgDisp("主人公","Yes.
｛御影＊＊｝, I'm looking
forward to working with you∈");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("H610700000_07_010");
    MsgDisp("Mikage","Ooh...
I get it, but let's take it easy.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("H610700000_07_020");
    MsgDisp("Mikage","I know, why don't you try growing some
herbs?
You naturally become relaxed.");
    MsgDisp("主人公","Yes...!");
    break ;
    case 3:
    MsgClose();
    ChOpen(7,37,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("H610700000_07_030");
    MsgDisp("Mikage","｛主人公｝, so you joined the
gardening club.");
    MsgDisp("主人公","Yes.
｛御影＊＊｝, I'm looking
forward to working with you.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("H610700000_07_040");
    MsgDisp("Mikage","Congrats.
You've found a lifelong hobby, huh?");
    MsgDisp("主人公","Huh?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    ChEyeOpenLevel(7,0);
    VoicePlay("H610700000_07_050");
    MsgDisp("Mikage","The swamp of gardening is so deep, and the
temperature so nice, that I can't leave.");
    MsgDisp("主人公","Hehe, so that's how it is.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    ChEyeOpenLevel(7,10);
    VoicePlay("H610700000_07_060");
    MsgDisp("Mikage","Yeah, let's get into it together, okay?
Looking forward to it.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(7,37,0,0,0,#1,#1,0,0);
    VoicePlay("H610700000_07_070");
    MsgDisp("Mikage","Yo, I was waiting for you.");
    MsgDisp("主人公","Huh?
｛御影＊＊｝, you were
waiting for me?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    ChEyeOpenLevel(7,5);
    VoicePlay("H610700000_07_080");
    MsgDisp("Mikage","Yeah, I knew from the beginning that you'd
suit the gardening club.
Since you're so serious.");
    MsgDisp("主人公","Um...is being serious related to
gardening?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    ChEyeOpenLevel(7,10);
    VoicePlay("H610700000_07_090");
    MsgDisp("Mikage","Yeah, a lot. Plants grow more beautifully
the more you care for them. Just look at
all the beauties in my field.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("H610700000_07_100");
    MsgDisp("Mikage","Flowers, vegetables, they're all the same.");
    MsgDisp("主人公","So that's how it is.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("H610700000_07_110");
    MsgDisp("Mikage","Yeah, and that's why I'm already looking
forward to seeing how the plants you grow
will turn out.");
    MsgDisp("主人公","Yes, I'll do my best!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("H610700000_07_120");
    MsgDisp("Mikage","Yeah, do your best～♪");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop()