BGOpen("sc740",0);
BGMStop();
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","(Seems like I'm calm this year.
Maybe it's because I've been giving
it my all these last three years?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,0,0,3,-1,-1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("P530300002_03_000");
    MsgDisp("Honda","｛主人公｝.
You seem composed, huh!");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Since it's already third year, right?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("P530300002_03_010");
    MsgDisp("Honda","Yep yep, you seem just like a pro!");
    MsgDisp("主人公","Thanks.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    SEPlay("EV_SE_038");
    SEWait();
    VoicePlay("P530300002_03_020");
    MsgDisp("Honda","I'll be watching from the audience.
Enjoy the culmination of your hard work
of the last three years!");
    MsgDisp("主人公","(Yeah. This has continued for three years,
so I have to make the last stage a
success!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Seems like I'm calm this year.
Maybe it's because I've been giving
it my all these last three years?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,1,0,3,-1,-1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("P530300002_03_030");
    MsgDisp("Honda","｛主人公｝.
I came to see how you were doing.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝. 
Thank you!");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("P530300002_03_040");
    MsgDisp("Honda","...Huh?
You're the same as usual.");
    MsgDisp("主人公","Hehe, is that right?
Maube because it's already my third year.");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("P530300002_03_050");
    MsgDisp("Honda","I see. This is the final year, huh...
It's somewhat lonely.");
    MsgDisp("主人公","Hey, ｛本多＊＊｝
are you getting sentimental?");
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,5,1);
    VoicePlay("P530300002_03_060");
    MsgDisp("Honda","Ah, sorry. I came here to 
cheer you on, but what's the point 
if I'm the one who needs encouragement? ");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","No, thank you.
I'm off, okay?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P530300002_03_070");
    MsgDisp("Honda","Yes, take care! Even if I'm moved to tears
in the audience, you can't laugh, okay?");
    MsgDisp("主人公","(Hehe! Alright, I've given it my all in
the Concert Band Club for the last three
years, so this needs to be a culmination
of my hard work!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
