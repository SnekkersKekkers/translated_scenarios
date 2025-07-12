ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0,1);
    VoicePlay("R040700001_07_000");
    MsgDisp("Mikage","You look cool in that dress.");
    MsgDisp("主人公","How does it look?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("R040700001_07_010");
    MsgDisp("Mikage","I see...");
    MsgDisp("主人公","Huh?");
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,4);
    VoicePlay("R040700001_07_020");
    MsgDisp("Mikage","You must be the reason why so
many guys here are nervous, right?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0,1);
    VoicePlay("R040700001_07_030");
    MsgDisp("Mikage","That's how well it suits you.");
    MsgDisp("主人公","Yay!
Thank you very much.");
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2,1);
    VoicePlay("R040700001_07_040");
    MsgDisp("Mikage","But I wouldn't eat anything if I
wore a dress like that.");
    MsgDisp("主人公","You think so?
I would still eat a lot.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("R040700001_07_050");
    MsgDisp("Mikage","Haha, my bad. Was it
unnecessary for me to worry?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0,1);
    VoicePlay("R040700001_07_060");
    MsgDisp("Mikage","You're so beautiful, don't
you feel like a princess?");
    MsgDisp("主人公","Come on, stop teasing me.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("R040700001_07_070");
    MsgDisp("Mikage","I'm being serious...
Because I'm usually kidding around,
I guess I don't sound serious.");
    MsgDisp("主人公","Hehe, thank you very much.");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    ChCheek(7,5);
    VoicePlay("R040700001_07_080");
    MsgDisp("Mikage","That's a beautiful dress.
It looks good on you.");
    MsgDisp("主人公","Yay!
Do you really like it?");
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("R040700001_07_090");
    MsgDisp("Mikage","Yeah, I would want to see it
on a stage.");
    MsgDisp("主人公","Hehe, you mean it?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("R040700001_07_100");
    MsgDisp("Mikage","Hey, even if I am a bit of an
airhead, I wouldn't lie.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    ChEyeOpenLevel(7,8);
    VoicePlay("R040700001_07_110");
    MsgDisp("Mikage","It's beautiful.");
    MsgDisp("主人公","｛御影＊＊｝......
Thank you very much.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
