BGOpen("sc530",0);
ScrFadeIn(0);
MsgDisp("主人公","(Umm... I have to move classrooms
for afternoon classes, righT?)");
VoicePlay("F100320000_03_000");
MsgDisp("Honda?","Sakkun's muscles are amazing!");
VoicePlay("F100320000_02_000");
MsgDisp("Sassa?","Oh, yeah?
Well, I'm training");
BGMPlay("BGM_HANYOU_A",0.01);
MsgClose();
ChOpen(3,254,0,0,0,-1,-1,0,1,0,30);
ChOpen(2,254,3,0,4,-1,-1,0,2,0,30);
MsgDisp("主人公","Ah, it's ｛本多＊＊｝ and ｛颯砂＊＊｝.
What are you doing?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100320000_03_010");
MsgDisp("Honda","Sakkun and I were
talking about muscles.");
MsgDisp("主人公","A conversation about muscles...?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("F100320000_02_010");
MsgDisp("Sassa","Iku listened to me very attentively
about the differences in training 
for each of the eight sports.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("F100320000_02_020");
MsgDisp("Sassa","Are you interested?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("F100320000_03_020");
MsgDisp("Honda","Yeah, the physiques of sprinters and
long distance runners are polar
opposites, right? He has it all in 
this one body. It's amazing.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("F100320000_02_030");
MsgDisp("Sassa","I-I guess so.
Iku, you're really good 
at giving compliments.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("F100320000_03_030");
MsgDisp("Honda","Praise?
I'm just stating the facts.
You think so too, don't you?");
ChMouth(3,0);
MsgDisp("主人公","Yeah.
I always think he's amazing.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100320000_02_040");
MsgDisp("Sassa","Oh, thanks.
I'm feeling a bit more excited now.
I think I'll have a good practice today.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
ChPosition(3,0);
MsgDisp("主人公","｛本多＊＊｝,
are you interested
in track and field?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("F100320000_03_040");
MsgDisp("Honda","Right, rather than being interested
in the sport itself, I'm hoping to 
contribute something to Sakkun's 
challenge.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("F100320000_03_050");
MsgDisp("Honda","Looks like his motivation went
up for today. It was mostly thanks 
to you.");
ChSet(3,0);
VoicePlay("F100320000_03_060");
MsgDisp("Honda","I'll think about what I can do.
Bye.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(3);
MsgDisp("主人公","(｛本多＊＊｝ is helping ｛颯砂＊＊｝?
I wonder if it'll be alright...?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
