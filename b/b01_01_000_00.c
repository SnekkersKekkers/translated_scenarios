BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm late...
Ah, ｛風真＊＊｝ is already
here!)");
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    MsgClose();
    ChOpen(1,253,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Sorry, did you wait?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B010100000_01_000");
    MsgDisp("Kazama","Yeah, I waited.");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,1);
    ChCheek(1,7);
    MsgDisp("主人公","...Sorry?");
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    Wait(16,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B010100000_01_010");
    MsgDisp("Kazama","...Are you doing that on purpose?");
    MsgDisp("主人公","Huh?");
    MsgDispSksp(1,0);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    ChCheek(1,0);
    VoicePlay("B010100000_01_020");
    MsgDisp("Kazama","There's no way...
Nevermind.
Be more careful next time.");
    MsgDispSksp(0);
    break ;
    case 3:
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    MsgClose();
    ChOpen(1,253,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Sorry, did you wait?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B010100000_01_030");
    MsgDisp("Kazama","It's fine.
I only just got here too.");
    MsgDisp("主人公","...Really?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B010100000_01_040");
    MsgDisp("Kazama","Man, you...
Just accept what I said.");
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    MsgDispSksp(1,0);
    ChMouth(1,3);
    ChEyeOpenLevel(1,#1);
    MsgDisp("主人公","Hehe, thank you.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    MsgClose();
    ChOpen(1,253,0,4,3,#1,#1,0,0);
    MsgDisp("主人公","Sorry for being late...!");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B010100000_01_050");
    MsgDisp("Kazama","Jeez. What's with the pathetic face? You
didn't have to rush here like that, I'm
not going to just leave.");
    MsgDisp("主人公","B-But...");
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B010100000_01_060");
    MsgDisp("Kazama","It's fine.
You ran here for my sake, right?
That's enough as-is.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChCheek(1,0);
