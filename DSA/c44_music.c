// //ou are building a music player that loops through songs endlessly.
// Implement a circular linked list where each node stores a song name.
// Write functions to:
// Add a new song at the end.
// Remove a song by name.
// Traverse the playlist continuously for k iterations.
// Demonstrate with at least 5 songs.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Song
{
    char name[50];
    struct Song *next;
};

struct Song *last = NULL;


// Add song at end
void addSong(char name[])
{
    struct Song *newSong = (struct Song *)malloc(sizeof(struct Song));
    strcpy(newSong->name, name);

    if(last == NULL)
    {
        last = newSong;
        last->next = last;
    }
    else
    {
        newSong->next = last->next;
        last->next = newSong;
        last = newSong;
    }

    printf("Added: %s\n", name);
}


// Remove song by name
void removeSong(char name[])
{
    if(last == NULL)
    {
        printf("Playlist empty\n");
        return;
    }

    struct Song *curr = last->next;
    struct Song *prev = last;

    do
    {
        if(strcmp(curr->name, name) == 0)
        {
            if(curr == last && curr->next == last)
            {
                last = NULL;
            }
            else
            {
                prev->next = curr->next;

                if(curr == last)
                    last = prev;
            }

            free(curr);

            printf("Removed: %s\n", name);

            return;
        }

        prev = curr;
        curr = curr->next;

    } while(curr != last->next);

    printf("Song not found\n");
}



// Traverse playlist k iterations
void playSongs(int k)
{
    if(last == NULL)
    {
        printf("Playlist empty\n");
        return;
    }

    struct Song *temp = last->next;

    printf("\nPlaying playlist:\n");

    for(int i = 0; i < k; i++)
    {
        printf("%s\n", temp->name);
        temp = temp->next;
    }
}



int main()
{
    addSong("Shape of You");
    addSong("Believer");
    addSong("Perfect");
    addSong("Closer");
    addSong("Faded");


    playSongs(8);


    removeSong("Perfect");


    playSongs(8);


    return 0;
}