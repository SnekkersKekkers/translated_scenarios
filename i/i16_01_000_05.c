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
    ChOpen(1,35,2,4,2,0,#1,0,0);
    Wait(15,0);
    ChEyeOpenLevel(1,10);
    VoicePlay("I160100005_01_000");
    MsgDisp("Kazama","Lately, a lot has been selling out,
not just the items on display......");
    ChEyeOpenLevel(1,#1);
    MsgDisp("主人公","Yeah...... is it that all the
other items selling out are related
to the ones on display?");
    ChEye(1,3);
    ChMouth(1,1);
    ChMotion(1,3);
    VoicePlay("I160100005_01_010");
    MsgDisp("Kazama","Yeah, that's it!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I160100005_01_020");
    MsgDisp("Kazama","That's something you wouldn't
be able to tell unless you knew the
whole store well...... You're good.");
    MsgDisp("主人公","(I'm so happy that ｛風真＊＊｝
said that!
Let's keep it up.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,2,4,2,0,#1,0,0);
    Wait(15,0);
    ChEyeOpenLevel(1,10);
    VoicePlay("I160100005_01_030");
    MsgDisp("Kazama","We're running out of
orange rhinestones again.
I ordered more.");
    ChEyeOpenLevel(1,0);
    VoicePlay("I160100005_01_040");
    MsgDisp("Kazama","Should I get even more?");
    MsgDisp("主人公","Ah, now that you mention it,
didn't the orange rhinestone bag
sell out quickly, too?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("I160100005_01_050");
    MsgDisp("Kazama","Aah, you're right.
We didn't order many since it was
a pretty expensive item.");
    MsgDisp("主人公","Maybe it's what our customers
are looking for right now?");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("I160100005_01_060");
    MsgDisp("Kazama","Shall we take the chance and
order more expensive rhinestone bags?");
    MsgDisp("主人公","Will it be okay?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I160100005_01_070");
    MsgDisp("Kazama","It's important to assume so
in business.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I160100005_01_080");
    MsgDisp("Kazama","It's something I wouldn't
have thought of.
It's a realization that's like you.");
    MsgDisp("主人公","(I'm so happy that ｛風真＊＊｝
said that!
Let's keep it up.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
