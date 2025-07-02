BGMStop();
BGOpen("sc810",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","Today was fun.
Thank you, ｛風真＊＊｝.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("Q080100000_01_000");
    MsgDisp("Kazama","You look totally fine
everything we did.");
    MsgDisp("主人公","Yeah, I still have energy.");
    ChEye(1,0);
    ChMouth(1,4);
    ChMotion(1,0);
    VoicePlay("Q080100000_01_010");
    MsgDisp("Kazama","Well, how about spending the
next free time together too?");
    MsgDisp("主人公","Of course I want to!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("Q080100000_01_020");
    MsgDisp("Kazama","Good reply.
See you back here tomorrow morning.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Today was fun!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("Q080100000_01_030");
    MsgDisp("Kazama","Wasn't it?
I enjoyed myself too.");
    MsgDisp("主人公","Thanks to ｛風真＊＊｝,
I made some great memories.");
    ChEye(1,0);
    ChMouth(1,4);
    ChMotion(1,1);
    ChCheek(1,7);
    VoicePlay("Q080100000_01_040");
    MsgDisp("Kazama","You did?
Then it was worth inviting you.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChCheek(1,0);
    VoicePlay("Q080100000_01_050");
    MsgDisp("Kazama","We aren't done yet though.
We still have more free time.");
    MsgDisp("主人公","Let's spend that together too then too.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("Q080100000_01_060");
    MsgDisp("Kazama","It's settled, then. 
This trip is really so much fun.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoiceEVSPlay(1);
    VoicePlay("Q080100000_01_070");
    MsgDisp("Kazama","｛主人公｝.
I'll met you here again then.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
