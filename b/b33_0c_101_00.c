BGOpen("wf220",0);
ChLayout(2);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
ChEye(5,3);
VoicePlay("B330C10100_05_000");
MsgDisp("Hiiragi","It's like the four of us are going on a
cruise.");
MsgDisp("主人公","Hehe, yeah.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B330C10100_05_010");
MsgDisp("Hiiragi","Until I enrolled into Habataki High
School, I was always travelling.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B330C10100_07_000");
MsgDisp("Mikage","Did you go on cruises too?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C10100_05_020");
MsgDisp("Hiiragi","Yes, I have been able to go to remote
islands too.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
VoicePlay("B330C10100_06_000");
MsgDisp("Himuro","Do you ever wish you could return to those
days, Yanosuke-senpai?");
ChEye(5,0);
ChMouth(5,2);
MsgDisp("主人公","Eh...");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("B330C10100_05_030");
MsgDisp("Hiiragi","...No.
I have not gotten used to it yet, but I
love life at Haba High.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B330C10100_07_010");
MsgDisp("Mikage","Phew, well I'm glad for that.
Yanosuke, don't pause so suddenly.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C10100_05_040");
MsgDisp("Hiiragi","I apologize.
But, I do hold a bit of nostalgia for
those days.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("B330C10100_07_020");
MsgDisp("Mikage","I see.
Isn't that proof that you're staring to
have more freedom now?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C10100_05_050");
MsgDisp("Hiiragi","I would be glad for that to be the case.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("B330C10100_06_010");
MsgDisp("Himuro","Then, today in order to satisfy
Yanosuke-senpai's wanderlust, let's get on
board with the feeling of adventure.");
MsgDisp("主人公","Yeah, let's do that.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B330C10100_05_060");
MsgDisp("Hiiragi","Heheh, thank you.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,1);
VoicePlay("B330C10100_06_020");
MsgDisp("Himuro","I'll go check the ship schedule.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
MsgClose();
ChClose(5,0,30);
ChClose(7,0,30);
ChLayout(1);
MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,3,0,30);
ChOpen(7,255,0,0,0,#1,#1,0,3,0,30);
VoicePlay("B330C10100_05_070");
MsgDisp("Hiiragi","Inori-kun asks anything without any
reservations, it's a nice feeling.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B330C10100_07_030");
MsgDisp("Mikage","Yeah, that's one of his good points.");
MsgDisp("主人公","Yeah.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C10100_05_080");
MsgDisp("Hiiragi","It's thanks to you all that I now have the
freedom to reminisce about the past.");
MsgDisp("主人公","(Alright, let's enjoy this 4 person boat
trip!)");
MsgClose();
ScrFadeOut(0,0);
ChLayout(2);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,7);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,7);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
ChOpen(6,253,7,0,0,#1,#1,0,3,0,0);
