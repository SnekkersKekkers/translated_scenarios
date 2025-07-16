BGOpen("fp720",0);
EnvAutoSet(0);
EnvPlay("SE_ENV_BG_EX060_CO0",0.5);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_B",0.01);
    ChOpen(1,35,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you very much.
We look forward to your next visit.");
    SEPlay("EV_SE_653");
    Wait(50,0);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("I160100008_01_000");
    MsgDisp("Kazama","......Phew, that was the last customer.");
    MsgDisp("主人公","I'll lock up and turn off the lights.");
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I160100008_01_010");
    MsgDisp("Kazama","Oh, I'll leave it to you.");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("fp720",2);
    MsgClose();
    ChOpen(1,35,0,0,3,#1,#1,0,0);
    BGMVol(0.5,2);
    ScrFadeIn(0);
    ChMotion(1,1);
    VoicePlay("I160100008_01_020");
    MsgDisp("Kazama","We're all done.");
    MsgDisp("主人公","Yeah, that was pretty fast.");
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    Wait(16,0);
    ChEye(1,4);
    ChMouth(1,3);
    VoicePlay("I160100008_01_030");
    MsgDisp("Kazama","Yeah, it's always like this with you.
Feels good being this efficient.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I160100008_01_040");
    MsgDisp("Kazama","I'll be counting on you, my dear partner?");
    MsgDisp("主人公","(I did it! To have ｛風真＊＊｝
call me his partner, I'm glad I've worked
hard until now!)");
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you very much.
Please come again.");
    SEPlay("EV_SE_653");
    Wait(50,0);
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_B",0.01);
    ChOpen(1,35,0,0,0,#1,#1,0,0);
    Wait(15,1);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I160100008_01_050");
    MsgDisp("Kazama","Good work.
We're closed for the day.");
    MsgDisp("主人公","Yeah.
Then I'll go lock up and turn off the
lights.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("I160100008_01_060");
    MsgDisp("Kazama","I'll close the register and write the
daily report.");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("fp720",2);
    MsgClose();
    ChOpen(1,35,0,0,3,#1,#1,0,0);
    BGMVol(0.5,2);
    ScrFadeIn(0);
    VoicePlay("I160100008_01_070");
    MsgDisp("Kazama","I noticed that our sales are way up on
days where we're both working when I was
doing the daily report.");
    MsgDisp("主人公","That's obvious.
We have such a charismatic shopkeeper.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I160100008_01_080");
    MsgDisp("Kazama","It's not like I only work with you.
I have shifts with other people, too.");
    MsgDisp("主人公","Hm?
That means......");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I160100008_01_090");
    MsgDisp("Kazama","Exactly.
It's you who's amazing.
Got it?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I160100008_01_100");
    MsgDisp("Kazama","If being partners isn't enough, want to
open a store with me?");
    MsgDisp("主人公","If we could, that'd be nice......");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I160100008_01_110");
    MsgDisp("Kazama","If you think that way, I'll definitely
make it happen.");
    MsgDisp("主人公","(｛風真＊＊｝ is saying he approves of me,
right?
I'm glad I worked hard!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
EnvAutoSet(1);
