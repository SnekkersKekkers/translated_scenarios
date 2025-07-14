switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    ChEye(8,0);
    ChMouth(8,5);
    ChMotion(8,1,1);
    ChEyeOpenLevel(8,10);
    VoicePlay("L040800002_08_000");
    MsgDisp("Shirahane","I saw this on Habacha!
They're super steep!");
    MsgDisp("主人公","Yeah, I went all out.");
    ChEye(8,2);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("L040800002_08_010");
    MsgDisp("Shirahane","You didn't hafta...... But, I'm happy.
Thanks.");
    MsgDisp("主人公","(He seemed happy.
Thank goodness!)");
    break ;
    case 3:
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,1,1);
    ChEyeOpenLevel(8,10);
    VoicePlay("L040800002_08_020");
    MsgDisp("Shirahane","Yay!
It's the trendy chocolate!");
    MsgDisp("主人公","Yeah.
I kinda went all out!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,2,1);
    VoicePlay("L040800002_08_030");
    MsgDisp("Shirahane","Heheh, that so.
Well, I gotta go all out for the return
gift, too!");
    MsgDisp("主人公","Oh, that wasn't my intention......");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("L040800002_08_040");
    MsgDisp("Shirahane","All good.
S'what I wanna do.
Thanks▼");
    MsgDisp("主人公","(｛大地＊＊｝ seemed happy.
Thank goodness!)");
    break ;
    case 4:
    case 5:
    ChEye(8,0);
    ChMouth(8,5);
    ChMotion(8,1,1);
    ChEyeOpenLevel(8,10);
    ChCheek(8,8);
    VoicePlay("L040800002_08_050");
    MsgDisp("Shirahane","This...... It's the chocolates on
Habacha......");
    MsgDisp("主人公","Hehe, I got a little excited▼");
    ChEye(8,3);
    ChMouth(8,4);
    VoicePlay("L040800002_08_060");
    MsgDisp("Shirahane","For me......?");
    MsgDisp("主人公","Yes. Just for you, ｛大地＊＊｝.");
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,2,1);
    VoicePlay("I660800008_08_090");
    MsgDisp("Shirahane","Ah, no......
My heart's poundin'.");
    MsgDisp("主人公","Hm?");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("D020800800_08_020");
    MsgDisp("Shirahane","Ah......
Yeah, thanks!");
    MsgDisp("主人公","(Hehe, he seemed really happy.
Thank goodness!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(8,0,0);
