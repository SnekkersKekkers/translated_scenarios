ChOpen(3,254,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("N020300002_03_000");
    MsgDisp("Honda","Hmm?");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
What's up?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("N020300002_03_010");
    MsgDisp("Honda","Ah, sorry.
I still haven't found your name yet.");
    MsgDisp("主人公","(Oof...
My score was disappointing, huh.)");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("N020300002_03_020");
    MsgDisp("Honda","Did you already check the test results?");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Yeah, I did check.");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("N020300002_03_030");
    MsgDisp("Honda","Ah, you did?
Umm, are you feeling down?");
    MsgDisp("主人公","Umm... No.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("N020300002_03_040");
    MsgDisp("Honda","I see, I see! That's good.
Then, it's none of my business.");
    MsgDisp("主人公","(Oof... I mean, it was my score that made
you ask that...)");
    break ;
    case 4:
    case 5:
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("N020300002_03_050");
    MsgDisp("Honda","Hmm, what is it?
This feeling of haziness...");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
What's up?");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("N020300002_03_060");
    MsgDisp("Honda","Hmm, I've never been interested in other
people's test results...");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("N020300002_03_070");
    MsgDisp("Honda","But somehow, yours is bothering me.");
    MsgDisp("主人公","Oof...");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,2);
    VoicePlay("N020300002_03_080");
    MsgDisp("Honda","I just think it would be nice if your name
appeared higher up.
I wonder why...");
    MsgDisp("主人公","(To be honest, it is a bit embarrassing to
be with ｛本多＊＊｝ who is currently
leading the grade...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
