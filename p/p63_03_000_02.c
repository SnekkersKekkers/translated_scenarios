BGMPlay("BGM_PLACE_SHOP");
BGOpen("sc724",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(This year we're doing an organic cafe.
It's a culmination of my efforts
in the Horticulture club...)");
    MsgClose();
    ChOpen(3,254,5,5,3,-1,-1,0,0);
    VoicePlay("P630300002_03_000");
    MsgDisp("Honda","Eh!
It's like a real cafe.");
    MsgDisp("主人公","Ah,｛本多＊＊｝.
Welcome.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("P630300002_03_010");
    MsgDisp("Honda","The horticulture club is amazing.");
    MsgDisp("主人公","Hehe.
We're serving meals made with the
herbs and vegetables we grew.");
    ChSet(3,3);
    VoicePlay("P630300002_03_020");
    MsgDisp("Honda","Yep yep, sounds nice.
Then, I would like some at once!");
    MsgDisp("主人公","Certainly!
Then, I'll lead you to your seat.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(This year we're doing an organic cafe.
It's a culmination of my efforts
in the Horticulture club...)");
    MsgClose();
    ChOpen(3,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("P630300002_03_030");
    MsgDisp("Honda","｛主人公｝.");
    MsgDisp("主人公","｛本多＊＊｝, welcome!");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P630300002_03_040");
    MsgDisp("Honda","I'm surprised.
When was a shop this splendid built?");
    MsgDisp("主人公","Hehe!
It's a wonderful open air cafe, huh?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("P630300002_03_050");
    MsgDisp("Honda","Yep yep.
I want to have tea together,
how about it?");
    MsgDisp("主人公","I'm staff, so it's not
possible right now. I'm sorry.");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,5,1);
    VoicePlay("P630300002_03_060");
    MsgDisp("Honda","I see～, I'm disappointed.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P630300002_03_070");
    MsgDisp("Honda","Then, I'll dine alone.
I'll have a salad and herb tea!");
    MsgDisp("主人公","Hehe, certainly!
Then, I'll lead you to your seat.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
