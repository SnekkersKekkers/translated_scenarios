BGOpen("fp720",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,0,3,#1,#1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("I160100007_01_000");
    MsgDisp("Kazama","｛主人公｝. You're getting a reputation
for being a good mentor. Kind and polite,
they say.");
    MsgDisp("主人公","Really? It must be because everyone is a
good student.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("I160100007_01_010");
    MsgDisp("Kazama","Wow. Then, maybe I'll ask you to teach me
too, next time?");
    MsgDisp("主人公","(There's nothing I can teach you,
｛風真＊＊｝......!
But, I'm happy everyone is saying that.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("I160100007_01_020");
    MsgDisp("Kazama","｛主人公｝, how's our new coworker
doing?");
    MsgDisp("主人公","Yeah, I think they're great.
Motivated, and always smiling.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I160100007_01_030");
    MsgDisp("Kazama","I see.
Thanks to their mentor.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I160100007_01_040");
    MsgDisp("Kazama","Having you as their partner really helps.
The newcomers are being trained well.");
    MsgDisp("主人公","Thanks...... Hearing you say that makes me
happy.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I160100007_01_050");
    MsgDisp("Kazama","I'm counting on you.");
    MsgDisp("主人公","(It makes me a little shy to be praised
like this......
Let's keep it up just like this!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
