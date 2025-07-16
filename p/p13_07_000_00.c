BGOpen("sc721",0);
BGMPlay("BGM_PLACE_SHOP");
Wait(50,0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","Won't you take on the giant maze?～
If you succeed, you get to try delicious
milk～");
    VoicePlay("P130700000_07_000");
    MsgDisp("Mikage?","The prize is some delicious cow milk～");
    MsgClose();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("P130700000_07_010");
    MsgDisp("Mikage","｛主人公｝, you're in high
spirits.");
    MsgDisp("主人公","Hehe.
｛御影＊＊｝ is also
helping with drawing more people in?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P130700000_07_020");
    MsgDisp("Mikage","If I'm here, I'll only distract the cute
cow-girl.");
    MsgDisp("主人公","I'm not a cow girl, this is a cow-print
shirt.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("P130700000_07_030");
    MsgDisp("Mikage","Is that so.
Anyhow, I'll entrust the cute calf with
gathering more people.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("P130700000_07_040");
    MsgDisp("Mikage","I think I'll wander around with the
objective of getting Molly's milk?");
    MsgDisp("主人公","Yes.
Lost lamb, one customer coming up!");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(7,#1);
    ChMouth(7,#1);
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Won't you take on the giant maze?～
If you succeed, you get to try delicious
milk～");
    VoicePlay("P130700000_07_050");
    MsgDisp("Mikage?","Ohh, it's quite popular, isn't it?");
    MsgClose();
    ChOpen(7,254,3,0,3,#1,#1,0,0);
    VoicePlay("P130700000_07_060");
    MsgDisp("Mikage","It's thanks to the cute calf-chan, huh?");
    MsgDisp("主人公","It's thanks to all the delicious milk
｛御影＊＊｝ prepared for
us!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P130700000_07_070");
    MsgDisp("Mikage","There's plenty, so you can drink it later.");
    MsgDisp("主人公","Hehe, yes.
I'm looking forward to it.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0,1);
    VoicePlay("P130700000_07_080");
    MsgDisp("Mikage","Oh.
Then, can I have a cup?");
    MsgDisp("主人公","Nope.
If you can't escape successfully, you
can't drink milk, you know?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("P130700000_07_090");
    MsgDisp("Mikage","Oh, I'll take the challenge.
I'll make the fastest record.");
    MsgDisp("主人公","Yes.
Lost lamb, admission for one～!");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(7,#1);
    ChMouth(7,#1);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
