ChOpen(3,254,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("N020300000_03_000");
    MsgDisp("Honda","The first among all the students is...
not me!");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Umm...");
    ChSet(3,3);
    VoicePlay("N020300000_03_010");
    MsgDisp("Honda","Impressive, really impressive!
I got a different rank than usual!");
    MsgDisp("主人公","(Are you impressed by your drop in
rank...? Anyway, I'm glad I did my best!)");
    break ;
    case 3:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("N020300000_03_020");
    MsgDisp("Honda","I heard the news!");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("N020300000_03_030");
    MsgDisp("Honda","You're the first in the rank∋
Congratulations!");
    MsgDisp("主人公","Yeah, thank you!
Umm... What about you, ｛本多＊＊｝?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("N020300000_03_040");
    MsgDisp("Honda","Hm?　Me?
I still haven't checked yet.");
    MsgDisp("主人公","(As expected of ｛本多＊＊｝...
Anyway, I'm really glad I did my best!)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("N020300000_03_050");
    MsgDisp("Honda","Oh, there you are!");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
What's up?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("N020300000_03_060");
    MsgDisp("Honda","I saw your results for the final exams!
Your name was right above mine!");
    MsgDisp("主人公","Hehe, I see.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4);
    ChEyeOpenLevel(3,0);
    VoicePlay("N020300000_03_070");
    MsgDisp("Honda","I'm convinced now after seeing that. You
are the reason I get to realize so many
things for the first time.");
    MsgDisp("主人公","(｛本多＊＊｝ praised me!
I'm glad I did my best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
