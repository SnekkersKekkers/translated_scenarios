BGOpen("ne000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Well then......
Should I head home now?)");
VoicePlay("E010520100_34_000");
MsgDisp("Staff","Thank you very much～!");
VoicePlay("E010520100_02_000");
MsgDisp("Sassa?","Thanks.");
VoicePlay("E010520100_05_000");
MsgDisp("Hiiragi?","No need to thank me.");
MsgDisp("主人公","(Hm?　That voice just now was......)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(5,255,4,0,4,#1,#1,0,1);
ChOpen(2,255,3,0,4,#1,#1,0,2);
MsgDisp("主人公","｛柊＊＊＊｝, ｛颯砂＊＊｝. It's rare
seeing you two together.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("E010520100_02_010");
MsgDisp("Sassa","Ah, it's you!
Oh yeah, if you're free why don't you help
out too?");
MsgDisp("主人公","Eh?");
ChMotion(5,0);
VoicePlay("E010520100_05_010");
MsgDisp("Hiiragi","I was answering a survey for Habatcher
when I ran into Sassa.");
MsgDisp("主人公","I see!
I work part time at Habatcher, so I can't
answer the survey.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("E010520100_02_020");
MsgDisp("Sassa","That's too bad.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("E010520100_05_020");
MsgDisp("Hiiragi","Yeah. I was interested in knowing how
you'd respond.");
MsgDisp("主人公","What was the question?");
ChEye(5,0);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("E010520100_02_030");
MsgDisp("Sassa","Well, it's...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("E010520100_02_040");
MsgDisp("Sassa","What did Hiiragi answer?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("E010520100_05_030");
MsgDisp("Hiiragi","I answered 'No comment'.");
ChMouth(5,2);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("E010520100_02_050");
MsgDisp("Sassa","I didn't think of that!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(2);
ChEye(5,4);
ChMouth(5,4);
VoicePlay("E010520100_02_060");
MsgDisp("Sassa","Let me rewrite what I wrote earlier.");
MsgDisp("主人公","Um? ｛颯砂＊＊｝...... I wonder what's
wrong.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010520100_05_040");
MsgDisp("Hiiragi","Do you currently have a girlfriend or
boyfriend or someone you like?");
MsgDisp("主人公","Huh ∋");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010520100_05_050");
MsgDisp("Hiiragi","That was the question in the survey.
Hehe.");
MsgDisp("主人公","Ah, the survey question?
That was surprising......");
ChEye(5,0);
ChMotion(5,4);
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
ChOpen(2,255,5,0,4,#1,#1,0,2);
VoicePlay("E010520100_02_070");
MsgDisp("Sassa","That was close......
I changed my answer to 'No comment' too.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("E010520100_05_060");
MsgDisp("Hiiragi","What was it before?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,3);
VoicePlay("E010520100_02_080");
MsgDisp("Sassa","I'm not telling you!");
MsgDisp("主人公","(So that's why you wanted me to take the
survey......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
