BGOpen("sc320",0);
BGMPlay("BGM_C07_MIKAGE_A",0.01);
SEPlay("EV_SE_666",0.5);
MsgClose();
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("J040700002_07_000");
MsgDisp("Mikage","Oi, you guys. Look here for a sec, will
ya?");
SEVol(0.65);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("J040700002_07_010");
MsgDisp("Mikage","Next Sunday we're having extra-curricular
activities.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
ChEyeOpenLevel(7,8);
SEStop("EV_SE_666",1);
VoicePlay("J040700002_07_020");
MsgDisp("Mikage","If there's any weirdo who actually wants
to see my face on their day off, feel free
to join.");
SEPlay("EV_SE_GAYA_017",0.1,0.7);
Wait(30,0);
ChEyeOpenLevel(7,#1);