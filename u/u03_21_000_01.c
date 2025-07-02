ChLayout(1);
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("U032100001_21_000");
MsgDisp("Michiru","Ah......
Mari, this one.");
MsgDisp("主人公","This is......a zodiac sign?");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("U032100001_21_010");
MsgDisp("Michiru","Yeah, it's a constellation charm.
Would you like to have it as thanks for
today?");
MsgSel("Accept constellation charm","Don't accept it");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Sure, thank you!
I'll take good care of it!");
    ChEye(21,4);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("U032100001_21_020");
    MsgDisp("Michiru","Hehe. I bought a matching one.
I hope Mari can be touched by the power 
of the stars.");
    SEPlay("EV_SE_083");
    MsgDisp("主人公","(\"I got a constellation charm!)");
    SEPlay("EV_SE_080");
    MsgDisp("主人公","(Somehow I feel like I'll be
able to study better now......)");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,0);
    VoicePlay("U032100001_21_030");
    MsgDisp("Michiru","Thank you so much for today.
See you later.");
    MsgDisp("主人公","Ok, see you soon
｛みちる＊｝!");
    break ;
    case 1:
    MsgDisp("主人公","I'm sorry but......I decline.");
    ChEye(21,0);
    ChMouth(21,4);
    ChMotion(21,4);
    VoicePlay("U032100001_21_040");
    MsgDisp("Michiru","I see......
You don't like this kind of thing, huh?");
    ChEye(21,4);
    ChMouth(21,0);
    ChMotion(21,0);
    VoicePlay("U032100001_21_050");
    MsgDisp("Michiru","Well then, let's part for today.
See you later?");
    MsgDisp("主人公","Okay, see you later.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
