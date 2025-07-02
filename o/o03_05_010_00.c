ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(What should I do
about my partner......)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(5,30,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("O030501000_05_000");
    MsgDisp("Hiiragi","｛主人公｝.
Have you not joined a team as of yet?");
    MsgDisp("主人公","Not yet.");
    VoicePlay("O030501000_05_010");
    MsgDisp("Hiiragi","Then, if you'll allow me to join you.");
    MsgDisp("主人公","Yes!");
    break ;
    case 3:
    MsgDisp("主人公","(What should I do
about my partner......)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(5,30,0,3,4,-1,-1,0,0);
    VoicePlay("O030501000_05_020");
    MsgDisp("Hiiragi","Ah, I've finally found you.
Have you found a partner yet?");
    MsgDisp("主人公","No, not yet.
And you, ｛柊＊＊＊｝?");
    ChEye(5,4);
    VoicePlay("O030501000_05_030");
    MsgDisp("Hiiragi","Not yet.
Would you like to join me?");
    MsgDisp("主人公","Yes, gladly.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(What should I do
about my partner......)");
    MsgClose();
    SEPlay("EV_SE_671");
    SEWait();
    ChOpen(5,30,4,2,4,0,-1,0,0);
    ChEyeOpenLevel(5,9);
    VoicePlay("O030501000_05_040");
    MsgDisp("Hiiragi","Haa, did I make it?");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
What is it?");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("O030501000_05_050");
    MsgDisp("Hiiragi","It looks as though you haven't
found a partner for the
three-legged race, yet.");
    ChEye(5,0);
    VoicePlay("O030501000_05_060");
    MsgDisp("Hiiragi","Could I ask you to pair with me?");
    MsgDisp("主人公","Yes, I'll look forward to it!");
    ChMotion(5,3);
    Wait(22,0);
    ChEye(5,3);
    ChMouth(5,3);
    VoicePlay("O030501000_05_070");
    MsgDisp("Hiiragi","I thank you.
I'd like to take first place with you.");
    MsgDisp("主人公","Yes, let's do our best!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
