BGMPlay("BGM_PLACE_SHOP");
Wait(50,0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc721",0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","(Is this an effect of ｛御影＊＊｝'s
production?
More and more customers are gathering...)");
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("P130600000_06_000");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","Ah, welcome!
Little lost lamb.");
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("P130600000_06_010");
    MsgDisp("Himuro","Ha?
What are you saying?");
    MsgDisp("主人公","Never mind that, come in, come in!
Dear customer, entry for one!");
    ChEye(6,0);
    ChMouth(6,1);
    ChMotion(6,5);
    VoicePlay("P130600000_06_020");
    MsgDisp("Himuro","Eh, wait!");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(6,#1);
    ChMouth(6,#1);
    ChCheek(6,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc721",0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","(Is this an effect of ｛御影＊＊｝'s
production?
More and more customers are gathering...)");
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("P130600000_06_030");
    MsgDisp("Himuro","Quite a turnout.
Is it really that fun?");
    MsgDisp("主人公","Ah, welcome!
Little lost lamb.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,5);
    VoicePlay("P130600000_06_040");
    MsgDisp("Himuro","What's that?
I don't intend on getting lost though.");
    MsgDisp("主人公","But, you already came all this way, why
not have some fun?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,5);
    VoicePlay("P130600000_06_050");
    MsgDisp("Himuro","...Well if you say that, I'll think
about——");
    MsgDisp("主人公","Yes, entry for one theーn!");
    ChEye(6,0);
    ChMouth(6,1);
    ChMotion(6,5);
    VoicePlay("P130600000_06_060");
    MsgDisp("Himuro","Eh, wait a sec!
I still didn't say I would enter!");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(6,#1);
    ChMouth(6,#1);
    ChCheek(6,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
