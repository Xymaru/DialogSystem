# Dialog System
# Content
1. What is a Dialog System?
2. Types of dialogs
3. Why are dialogs important?
4. Dialog design
5. Market study
6. Selected approach
7. Possible improvements
8. Example and exercise
9. Documentation links and references

# 1. What is a Dialog System?
A dialog system is a gameplay mechanic that is used in many role-playing games (RPG). When the player interacts with a non-player character (NPC), it will start a conversation which may or may not give the player choices of what to say. Some dialogs are triggered by events happening in the game, such as finishing a dungeon or unlocking a specific item.

# 2. Types of dialogs
## 2.1. Simple dialogs
A simple dialog is a dialog that doesn't have any choices for the player, that means, it's a linear conversation that will not have any changes.
One common technique is to make linear conversations with choices, giving the players the feeling that they are affecting the conversation.

<img src="https://raw.githubusercontent.com/Xymaru/DialogSystem/main/docs/images/simple-dialogue.png" width="600"/>

Example of a simple dialog:

<img src="https://raw.githubusercontent.com/Xymaru/DialogSystem/main/docs/images/simple-dialogue-example.png" width="600"/>

## 2.2. Branching dialog
Branching dialogs are dialogs that are not linear, the NPC will have a dialog tree with all the possible paths the conversation can go through, depending on the choices of the player. Branching dialogs usually curve back on themselves, so that player choices will give a different response but it will stick back to the same branch.

<img src="https://raw.githubusercontent.com/Xymaru/DialogSystem/main/docs/images/branching-dialogue.png" width="600"/>

Example of a dialog tree:

<img src="https://raw.githubusercontent.com/Xymaru/DialogSystem/main/docs/images/branching-example.png" width="600"/>

# 3. Why are dialogs important?
Conversations are very important for games, they are there to keep the player involved and keep the story moving. They can take the form of quests, hints or conversations to introduce the player to new characters, locations, features or mechanics of the game.

# 4. Dialog design
The design of the in-game dialogs are very important, as the player may miss some important information. Many players skip the dialogs when they are more interested in missions and being active than reading the story. For this, we must design the dialogs to help the players, for this we have important points:
- Mark important info with colors, for example; green for items, blue for locations and yellow for characters.
- The last thing in the conversation must be what to do, where to go and what to kill.
- If the player already had this conversation, show only the important information about the next mission.
- Let the player skip the conversation and go for the important information.

Giving rewards to the players in a specific dialog path will make the players feel more interested in speaking with the NPCs, meaning they will be more willing to investigate the areas and read the conversations.

# 5. Market study
Many games use dialog systems, which are very simillar, but they have big differences in presenting the dialogs.
- Text, but no images

<img src="https://raw.githubusercontent.com/Xymaru/DialogSystem/main/docs/images/noimg-dialog.png" width="400"/>

- Text and image representing the character

<img src="https://raw.githubusercontent.com/Xymaru/DialogSystem/main/docs/images/img-dialog.png" width="400"/>

- Showing the text letter by letter

<img src="https://raw.githubusercontent.com/Xymaru/DialogSystem/main/docs/images/animalcrossing.gif" width="300"/>

# 6. Selected approach
In our case, our dialog system will have an image representing the character that we are speaking with, and the dialog will be showing the text letter by letter till its finished. The player will be able to skip the letter animation with a button and then go to the next dialog box by pressing the same button again. The player can also skip the whole dialog and go to the last one, this way he can check the relevant information. Also, items, names and locations will be represented with a different color.

# 7. Possible improvements
- Use voices for the dialog.
- Load the dialog from a text file, either self-defined, json or xml.

# 8. Example and exercise

## TODO 1: Create a dialog diagram
You can use an online diagram maker such as [Lucidchart](https://www.lucidchart.com).

Example: In a world of magic, a strange mage appears in front of the player, then the dialog begins:

<img src="https://raw.githubusercontent.com/Xymaru/DialogSystem/main/docs/images/dialog-example.png" width="400"/>

## TODO 2: Download the repository and follow the TODOs in the code inside the folder handout.
- [Handout](https://github.com/Xymaru/DialogSystem)

For a practical example, check the folder with the solution inside the repository.

## 9. Documentation Links and References
- [Gamasutra (Defining Dialogue Systems)](https://www.gamasutra.com/view/feature/3719/defining_dialogue_systems.php)
- [Dialogue tree (Wikipedia)](https://en.wikipedia.org/wiki/Dialogue_tree#:~:text=A%20dialogue%20tree%2C%20or%20conversation,choices%20until%20the%20conversation%20ends.)
- [Polygon](https://www.polygon.com/2014/3/17/5519270/successful-in-game-dialogue-should-carry-players-forward)
