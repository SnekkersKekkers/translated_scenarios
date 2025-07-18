BGMStop();
BGOpen("sc810",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","Phew, that was fun!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("Q080200000_02_000");
    MsgDisp("Sassa","Me too!");
    MsgDisp("主人公","We walked alot, didn't we?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("Q080200000_02_010");
    MsgDisp("Sassa","Yes, I'm looking forward to the bath.
Let's go around together the next day too!");
    MsgDisp("主人公","Yes, if I may!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("Q080200000_02_020");
    MsgDisp("Sassa","See you then, we'll meet up here.");
    MsgDisp("主人公","Ok!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Haah...that was fun!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("Q080200000_02_030");
    MsgDisp("Sassa","Yeah.
I enjoyed that a lot.");
    MsgDisp("主人公","Because we walked a lot, my legs are a bit
sore.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("Q080200000_02_040");
    MsgDisp("Sassa","The plan now is to take a big bath, and
have Nagasaki specialties for dinner,
right? Just relax.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("Q080200000_02_050");
    MsgDisp("Sassa","Want to hang out again tomorrow during our
next free period?");
    MsgDisp("主人公","Yeah!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("Q080200000_02_060");
    MsgDisp("Sassa","Good, I'll see you back here!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
