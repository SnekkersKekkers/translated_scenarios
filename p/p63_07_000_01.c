BGMPlay("BGM_PLACE_SHOP");
BGOpen("sc723",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(This year we're selling herb tea and
vegetables. It would be nice if the
vegetables everyone grew was well
received.)");
    MsgClose();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoicePlay("P630700001_07_000");
    MsgDisp("Mikage","This year has had a good start, hasn;t it?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝.
Seems like the vegetables sale is drawing
attention.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("P630700001_07_010");
    MsgDisp("Mikage","I see, I see.
That's because each one of them are a
beauty～♪");
    MsgDisp("主人公","Hehe, yes.
We've also prepared a variety of herbal
tea blends.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("P630700001_07_020");
    MsgDisp("Mikage","Then, shall I taste test them?");
    MsgDisp("主人公","Yes.
Then, one original blend herbal tea!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(This year we're selling herb tea and
vegetables. It would be nice if the
vegetables everyone grew was well
received.)");
    MsgClose();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("P630700001_07_030");
    MsgDisp("Mikage","｛主人公｝, this is a so-so turnout huh?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝.
Welcome!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P630700001_07_040");
    MsgDisp("Mikage","Firstly I'd like to taste it with my own
tongue.");
    MsgDisp("主人公","Hehe, yes. We have herbal teas with all
sorts of effects. Which one would you
like?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P630700001_07_050");
    MsgDisp("Mikage","Which～?
There's quite a lot of kinds huh?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P630700001_07_060");
    MsgDisp("Mikage","...Oh.
Then, I'll have the blend for sound sleep
please.");
    MsgDisp("主人公","Yes.
Then one original blend herbal tea for
sound sleep then!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEye(7,#1);
ChMouth(7,#1);
