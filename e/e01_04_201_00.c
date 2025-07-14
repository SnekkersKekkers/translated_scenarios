BGOpen("wf210",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("E010420100_02_000");
MsgDisp("Sassa?","Oh, I come here often.");
VoicePlay("E010420100_04_000");
MsgDisp("Nanatsumori?","Maybe I'll come again
if I feel like it.");
MsgDisp("主人公","Huh?
That voice just now was-");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChNanaType(0);
ChOpen(4,255,0,0,3,#1,#1,0,1);
ChOpen(2,40,3,0,4,#1,#1,0,2);
MsgDisp("主人公","｛七ツ森＊｝, ｛颯砂＊＊｝! I didn't
expect to see you two together.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoiceEVSPlay(2);
VoicePlay("E010420100_02_010");
MsgDisp("Sassa","｛主人公｝. We bumped into each other
by chance.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("E010420100_04_010");
MsgDisp("Nanatsumori","I was fascinated by the doggo Sassa was
walking.");
MsgDisp("主人公","Doggo...... dog?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010420100_02_020");
MsgDisp("Sassa","Ah, I was walking a friend's dog when I
ran into Nanatsumori.
It seems he likes dogs.");
ChMotion(4,2,1);
VoicePlay("E010420100_04_020");
MsgDisp("Nanatsumori","I've never seen such a big dog, so I
really wanted to pet it.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("E010420100_02_030");
MsgDisp("Sassa","He really seems to like Nanatsumori.
It was funny seeing him be licked.");
MsgDisp("主人公","Haha, that's how it went?
I wish I could've seen it too.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("E010420100_04_030");
MsgDisp("Nanatsumori","Why don't you come see it?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("E010420100_02_040");
MsgDisp("Sassa","Sounds good.
Since he likes running on the beach, let's
all run together.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("E010420100_04_040");
MsgDisp("Nanatsumori","......Sorry,
I'll pass on running.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("E010420100_02_050");
MsgDisp("Sassa","It's impossible.
If you have the leash, you have no choice
but to run.");
MsgDisp("主人公","(Haha! ｛七ツ森＊｝ and ｛颯砂＊＊｝,
you really like dogs, don't you?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
