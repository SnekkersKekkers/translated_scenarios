BGOpen("fp100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I think I'll head home now.
...... Huh?)");
MsgDisp("主人公","｛氷室＊＊｝! ｛柊＊＊＊｝!");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(6,255,0,0,0,#1,#1,0,1,0,30);
ChOpen(5,255,0,0,4,#1,#1,0,2,0,30);
VoicePlay("E010620000_05_000");
MsgDisp("Hiiragi","Hello.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010620000_06_000");
MsgDisp("Himuro","Hi.");
MsgDisp("主人公","Are you both shopping?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010620000_06_010");
MsgDisp("Himuro","Yeah, that's about it.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010620000_05_010");
MsgDisp("Hiiragi","Yes, I was out shopping for the theatre
company-");
ChEye(5,3);
ChMouth(5,2);
ChMotion(5,0);
VoicePlay("E010620000_05_020");
MsgDisp("Hiiragi","Oh, that's right, would you know what \"Pop
pop\" is?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
VoicePlay("E010620000_06_020");
MsgDisp("Himuro","What a sudden question......");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("E010620000_05_030");
MsgDisp("Hiiragi","The list just says\"Pop pop\"......
Do you have any ideas?");
MsgDisp("主人公","Popping......
Maybe something that gets squished??");
ChMouth(5,2);
ChMotion(5,0);
VoicePlay("E010620000_05_040");
MsgDisp("Hiiragi","Squished?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,7);
VoiceEVSPlay(6);
VoicePlay("E010620000_06_030");
MsgDisp("Himuro","｛主人公｝.
That's a bad way of explaining.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010620000_06_040");
MsgDisp("Himuro","It's probably cushioning material.
Like the bubble wrap used for fragile
items");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("E010620000_05_050");
MsgDisp("Hiiragi","Ah, perhaps.
The request came from the props
department.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("E010620000_06_050");
MsgDisp("Himuro","We can visit a hardware store.
I have errands to run, so we can go
together.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010620000_05_060");
MsgDisp("Hiiragi","Yes, that would be helpful.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010620000_06_060");
MsgDisp("Himuro","We'll be going then.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010620000_05_070");
MsgDisp("Hiiragi","Thanks for helping too.");
MsgDisp("主人公","Okay, take care!");
SEPlay("EV_SE_856");
MsgClose();
BGMStop();
ChClose(6,0,30);
ChClose(5,0,30);
SEWait();
Wait(20,0);
VoicePlay("E010620000_05_080");
MsgDisp("Hiiragi","......By the way, \"squish\" mean?");
VoicePlay("E010620000_06_070");
MsgDisp("Himuro","That's just a way of saying to crush
something.");
VoicePlay("E010620000_05_090");
MsgDisp("Hiiragi","I don't know what that means, ......maybe
I'll give it a try.");
MsgDisp("主人公","(I might have taught him something
strange......)");
MsgClose();
ScrFadeOut(0,0);
