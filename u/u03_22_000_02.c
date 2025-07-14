ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("U032200002_22_000");
MsgDisp("Hikaru","Hey Mari.
Do you like this?");
MsgDisp("主人公","An aromatic candle?");
ChMotion(22,3,1);
VoicePlay("U032200002_22_010");
MsgDisp("Hikaru","A candle that smells like the forest♪
Do you want it as a symbol of Hikaru and
Mari's friendship?");
MsgSel("Accept the candle","Don't accept");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Thank you.
It's like I received the healing powers of
friendship.");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("U032200002_22_020");
    MsgDisp("Hikaru","Ehehe▼");
    SEPlay("EV_SE_083");
    MsgDisp("主人公","(\"I got a forest scented candle!)");
    SEPlay("EV_SE_080");
    MsgDisp("主人公","(My body is feeling lighter
somehow......)");
    ChMotion(22,3,1);
    VoicePlay("U032200002_22_030");
    MsgDisp("Hikaru","It's around time we go home.
See you at school♪");
    MsgDisp("主人公","Yeah. See you later, ｛ひかる＊｝!");
    break ;
    case 1:
    MsgDisp("主人公","I'm sorry but......no");
    ChEye(22,0);
    ChMouth(22,0);
    ChEyeOpenLevel(22,10);
    VoicePlay("U032200002_22_040");
    MsgDisp("Hikaru","Eh......?");
    ChEye(22,4);
    ChMouth(22,0);
    ChMotion(22,0,1);
    VoicePlay("U032200002_22_050");
    MsgDisp("Hikaru","Ok, I see.
Well, that's enough for today.
See you next later?");
    MsgDisp("主人公","Okay. See you later, ｛ひかる＊｝.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
