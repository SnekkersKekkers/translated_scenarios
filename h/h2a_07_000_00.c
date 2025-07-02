BGOpen("sc624",0);
BGMPlay("BGM_C07_MIKAGE_C",0.01);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("H2A0700000_07_000");
    MsgDisp("Mikage","Winning championships, isn't that
amazing?.");
    MsgDisp("主人公","Yes, ｛御影＊＊｝, we did it!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("H2A0700000_07_010");
    MsgDisp("Mikage","I didn't do anything.
But, as the advisor, I'm super stoked.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("H2A0700000_07_020");
    MsgDisp("Mikage","Thanks to you guys, I'm in the
best mood. Thanks.");
    MsgDisp("主人公","It's because everyone did
their best.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("H2A0700000_07_030");
    MsgDisp("Mikage","Thanks to you, the members were able
to concentrate on this competition. Sorry
I put so much pressure on you, manager.");
    MsgDisp("主人公","No, not at all......");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("H2A0700000_07_040");
    MsgDisp("Mikage","Good work.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("H2A0700000_07_050");
    MsgDisp("Mikage","Come on, everyone's looking over
here like they want to thank you.
Go on.");
    MsgDisp("主人公","(We did it! We won!
I'm glad I did my best for the club
with everyone!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
