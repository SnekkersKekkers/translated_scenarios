BGOpen("sc710",0);
MsgClose();
ChOpen(3,254,1,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("F110310000_03_000");
MsgDisp("Honda","Welcome, welcome.");
MsgDisp("主人公","Huh? ｛本多＊＊｝, what are you doing?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("F110310000_03_010");
MsgDisp("Honda","Quiz Haircut Battle!");
MsgDisp("主人公","Huh? What?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("F110310000_03_020");
MsgDisp("Honda","Anyone who wins in a quiz gets a reward
haircut! Interesting, right? It was
Pika-chan's idea.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("F110310000_03_030");
MsgDisp("Honda","I have two special skills, after all.
Quiz, and my excellent haircutting arm.
Want to take on the challenge?");
MsgDisp("主人公","Um, I'll decline.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F110310000_03_040");
MsgDisp("Honda","Is that so? Well then, I'm off to find
customers. Seeya.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(3);
VoicePlay("F110310000_03_050");
MsgDisp("Honda","Welcome to the Quiz Haircut Battle!
Win the quiz, get a free haircut～");
VoicePlay("F110310000_39_000");
MsgDisp("Male Student","What is that, a haircut death match∋");
VoicePlay("F110310000_03_060");
MsgDisp("Honda","Welcome!
Well then, that's a win for me!");
MsgDisp("主人公","(｛本多＊＊｝ will never lose, so he'll be
fine.)");
MsgClose();
ScrFadeOut(0,0);
