BGOpen("sc310",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("F100130000_22_000");
MsgDisp("Hikaru?","Mari, is that you～?");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(22,254,0,0,0,-1,-1,0,1);
ChOpen(21,254,0,0,0,-1,-1,0,2);
MsgDisp("主人公","Oh, ｛ひかる＊｝, ｛みちる＊｝.");
ChEye(22,0);
ChMouth(22,2);
ChMotion(22,0,1);
VoicePlay("F100130000_22_010");
MsgDisp("Hikaru","...Huh?
You're not with Kazama-kun today?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("F100130000_21_000");
MsgDisp("Michiru","Look at that...
These kinds of days do exist.");
VoicePlay("F100130000_01_000");
MsgDisp("Kazama?","What's that supposed to mean?");
MsgClose();
ChClose(22,0,30);
ChClose(21,0,30);
ChLayout(2);
MsgClose();
ChOpen(22,254,0,0,0,-1,-1,0,1,0,30);
ChOpen(21,254,0,0,0,-1,-1,0,2,0,30);
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(1,254,0,0,2,8,-1,0,0);
MsgDisp("主人公","Oh, ｛風真＊＊｝.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F100130000_22_020");
MsgDisp("Hikaru","Look, he came!
Did Hikaru win?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("F100130000_21_010");
MsgDisp("Michiru","Not so fast, Hikaru.
Mari was alone at first, so I won.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("F100130000_01_010");
MsgDisp("Kazama","Oi, what are you saying?");
MsgDisp("主人公","Yeah, what is it?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("F100130000_21_020");
MsgDisp("Michiru","I heard that if you try to meet Mari
during break, there's a high chance
Kazama-kun will appear.");
ChEye(1,0);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F100130000_22_030");
MsgDisp("Hikaru","Yeah, and just when it seemed like he
wouldn't...
He appeared!");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("F100130000_01_020");
MsgDisp("Kazama","What do you think people are?
...Good grief.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgClose();
ChClose(22,0,30);
ChClose(21,0,30);
ChLayout(1);
MsgClose();
ChOpen(22,254,0,0,3,-1,-1,0,1,0,30);
ChOpen(21,254,0,0,0,-1,-1,0,2,0,30);
SEWait();
ChMotion(22,4,1);
VoicePlay("F100130000_22_040");
MsgDisp("Hikaru","Huh～ what's got him all mad?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,0);
VoicePlay("F100130000_21_030");
MsgDisp("Michiru","Well, it went just as expected.");
MsgDisp("主人公","Um...
Was there something you wanted to talk
about?");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0,1);
VoicePlay("F100130000_22_050");
MsgDisp("Hikaru","No, nothing.");
MsgDisp("主人公","(They really just came to mess with
｛風真＊＊｝...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
